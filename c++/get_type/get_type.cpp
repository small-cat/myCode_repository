/**
 ;* @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : get_type.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-09-07
 * @brief : get type name from c++
*/
#include <string>
#include <typeinfo>
#include <iostream>
#include <sstream>
#include <type_traits>

#include <cxxabi.h>

class Base  {
public:
  Base(int num) : a_(num) {}
  virtual ~Base() {}
  int b_;

private:
  int a_;
};

class Derived1 : public Base {
public:
  Derived1(int num) : Base(num) {}
  bool ShowDerived(int a, const char* str) {}
  virtual ~Derived1() {}
};

/* ============================================================================*/
/* string output mangement */
/* ============================================================================*/
class Output {
public:
  // 构造函数，同时也是类型转换函数，能将 string 转换成 Output
  // 构造函数中传入的是引用，所以传入的 string 在外部可以直接查看内容
  Output(std::string& s) : src_(s), is_compact_(true) {}
  // return a reference to itself
  Output& operator()() {
    return (*this);
  }

  template <typename T1, typename ... T>
    Output& operator() (const T1& val, const T& ... args) {
      Print(val);

      // 递归调用，不断通过 Print 方法获取参数的值，转换成 string 保存到 src_ 中
      return operator()(args ...); 
    }

  Output& compact() {
    is_compact_ = true;
    return (*this);
  }

  virtual ~Output() {}

private:
  template <typename T> 
    bool check_empty(const T&) { return false; }

  bool check_empty(const char* val) {
    return (!val) || (val[0] == 0);
  }

  template <typename T>
    void Print(const T& val) {
      if (check_empty(val)) {
        return;
      }

      if (!is_compact_) {
        src_ += " ";
        return;
      }

      //using ss_t = std::ostringstream;
      // 使用 ostringstream 进行格式转换，好处时不需要关心大小的限制, 会对类型进行自动推导和转换 使用 ostringstream 进行格式转换，好处时不需要关心大小的限制
      src_ += static_cast<std::ostringstream&>(std::ostringstream() << val).str();
      is_compact_ = false;
    }

private:
  std::string& src_;
  bool is_compact_;
};

/* ============================================================================*/
/* check type */
/* ============================================================================*/
template <typename T, bool IsBase = false>
struct check {
  Output out_;
  check(const Output& output) : out_(output) {
#if defined(__GNUC__)
    int status;
    char* dem_name = abi::__cxa_demangle(typeid(T).name(), nullptr, nullptr, &status);
    if (status != 0) {
      std::cout << " error ..." << std::endl;
      out_.compact()(typeid(T).name());
    } else {
      out_.compact()(dem_name);
    }
#ifdef DEBUG0
    std::cout << "{Base Check} : " << std::string(dem_name) << std::endl;
#endif
    //std::cout << std::string(dem_name);
    free(dem_name);
#else
#ifdef DEBUG0
    std::cout << "{Base Check} : " << typeid(T).name() << std::endl;
#endif
    //std::cout << typeid(T).name();
    out_.compact()(typeid(T).name());
#endif
  }
};

template <typename T, bool IsBase>
struct check<T const, IsBase> : check<T, true> {
  check(const Output& output) : check<T, true>(output) { 
#ifdef DEBUG0
    std::cout << "{Check const}" << std::endl;
#endif
    check<T, true>::out_.compact()("const");
    //std::cout << " const"; 
  }
};

template <typename T, bool IsBase>
struct check<T volatile, IsBase> : check<T, true> {
  check(const Output& output) : check<T, true>(output) { 
#ifdef DEBUG0
    std::cout << "{Check volatile}" << std::endl;
#endif
    check<T, true>::out_.compact()("volatile");
    //std::cout << " volatile"; 
  }
};

template <typename T, bool IsBase>
struct check<T const volatile, IsBase> : check<T, true> {
  check(const Output& output) : check<T, true>(output) { 
#ifdef DEBUG0
    std::cout << "{Check const volatile}" << std::endl;
#endif
    check<T, true>::out_.compact()("const volatile");
    //std::cout << " const volatile"; 
  }
};

template <typename T, bool IsBase>
struct check<T &, IsBase> : check<T, true> {
  check(const Output& output) : check<T, true>(output) { 
#ifdef DEBUG0
    std::cout << "{Check &}" << std::endl;
#endif
    check<T, true>::out_.compact()("&");
    //std::cout << " &"; 
  }
};

template <typename T, bool IsBase>
struct check<T &&, IsBase> : check<T, true> {
  check(const Output& output) : check<T, true>(output) { 
#ifdef DEBUG0
    std::cout << "{Check &&}" << std::endl;
#endif
    check<T, true>::out_.compact()("&&");
    //std::cout << " &&"; 
  }
};

template <typename T, bool IsBase>
struct check<T *, IsBase> : check<T, true> {
  check(const Output& output) : check<T, true>(output) { 
#ifdef DEBUG0
    std::cout << "{Check *}"<< std::endl;
#endif
    check<T, true>::out_.compact()("*");
    //std::cout << " *"; 
  }
};

/* 上面的模板继承存在递归调用，比如
 * check<const char* &&>, 编译器会这样做出推断
 * 1. check<const char* &&> deduce to -> check<T &&> : check<T>, T: const char*
 * 2. check<const char*> deduce to -> check<T *> : check<T>, T: const char
 * 3. check<const char> deduce to -> check<T const> : check<char>
 * */

// 简单的继承，实现 check 方法
// a template declaration cannot appear at block scope
// **A template-declaration can appear only as a namespace scope or class scope declaration. 
// In a function template declaration, the last component of the declarator-id shall not be 
// a template-id.** [ Note: That last component may be an identifier, an operator-function-id, 
// a conversion-function-id, or a literal-operator-id. In a class template declaration, if 
// the class name is a simple-template-id, the declaration declares a class template partial 
// specialization (14.5.5). —end note ]
//
// #define CHECK_TYPE__(OPT) \
//   template <typename T> \
//   struct check<T OPT> : public check<T> { \
//     check() { std::cout << " "#OPT << std::endl; } \
//   }

// 处理括号() 
template <bool>
struct Bracket {
  Output& out_;
  Bracket(Output& out, const char* str = nullptr) : out_(out) {
    out_.compact()("(");
  }

  ~Bracket() {
    out_.compact()(")");
  }
};

template <>
struct Bracket<false> {
  Bracket(Output& out, const char* str = nullptr) {
    out(str);
  }
};

// [N]
template <std::size_t N = 0>
struct Bound {
  Output& out_;
  Bound(Output& out) : out_(out) {}
  ~Bound() {
    if (N > 0) {
      out_.compact()("[").compact()( N ).compact()("]");
    } else {
      out_.compact()("[]");
    }
  }
};

// arrays
template <typename T, bool IsBase>
struct check<T[], IsBase> : check<T, true> {
  Bound<> bound_;
  Bracket<IsBase> bracket_;
  using check<T, true>::out_;

  check(const Output& out) : check<T, true>(out), bound_(out_), bracket_(out_) {}
};

// function parameters
template <bool, typename ... P>
struct Parameter;

template <bool IsStart>
struct Parameter<IsStart> {
  Output& out_;
  Parameter(Output& out) : out_(out) {}
  ~Parameter() {
    Bracket<IsStart> { out_ };
  }
};

/* @struct Parameter
 * 析构函数中，递归调用，一个一个参数的读取
 * Bracket 作为 lambda 的参数，传递参数的时候，构造 Bracket 对象，该对象相对于 lambda
 * 内部来说，作用域将 lambda 内部包括起来
 * 第一次 IsBase 是 true，Bracket 输出小括号，最后析构的时候，输出大括号
 * lambda 内部输出，check 第一个参数，然后递归剩余的参数，同时 IsBase 为 false
 * Bracket<false> 将输出 str 的内容，即逗号，将参数用逗号隔开
 * */
template <bool IsStart, typename P1, typename ... P>
struct Parameter<IsStart, P1, P ...> {
  Output& out_;
  Parameter(Output& out) : out_(out) {}
  // ~Parameter() {
  //   Bracket<IsStart> bk{ out_, "," };
  //   (void)bk;
  //   check<P1> { out_ };
  //   Parameter<false, P ...> { out_.compact() };
  // }
  ~Parameter() {
    [this](Bracket<IsStart> &&) {
      check<P1> { out_ };
      Parameter<false, P ...> { out_.compact() };
    }(Bracket<IsStart> { out_, "," });
  }
};

// const int []
// cv-qualifier(means const and volatile qualifier) ，不仅修饰数组元素，同时修饰数组本身
// 这样，模板会匹配到 check<T [], false> 和 check<T>
// 所以，还需要对数组的cv限定符做特例化
template <typename T, bool IsBase>
struct check<T const [], IsBase> : check<T const, true> {
  using check<T const, true>::out_;
  Bound<> bound_;
  Bracket<IsBase> bracket_;

  check(const Output& out) : check<T const, true>(out), bound_(out_), bracket_(out_) {}
};

template <typename T, bool IsBase>
struct check<T volatile [], IsBase> : check<T volatile, true> {
  using check<T volatile, true>::out_;
  Bound<> bound_;
  Bracket<IsBase> bracket_;

  check(const Output& out) : check<T volatile, true>(out), bound_(out_), bracket_(out_) {}
};

template <typename T, bool IsBase>
struct check<T const volatile [], IsBase> : check<T const volatile, true> {
  using check<T const volatile, true>::out_;
  Bound<> bound_;
  Bracket<IsBase> bracket_;

  check(const Output& out) : check<T const volatile, true>(out), bound_(out_), bracket_(out_) {}
};

#define CHECK_TYPE_ARRAY__(CV_OPT, BOUND_OPT, ...) \
  template <typename T, bool IsBase __VA_ARGS__> \
  struct check<T CV_OPT [BOUND_OPT], IsBase> : check<T CV_OPT, !std::is_array<T>::value > { \
    using check<T CV_OPT, !std::is_array<T>::value>::out_; \
    Bound<BOUND_OPT> bound_; \
    Bracket<IsBase> bracket_; \
    check(const Output& out) : check<T CV_OPT, !std::is_array<T>::value>(out), bound_(out_), bracket_(out_) {} \
  };

#define CHECK_TYPE_ARRAY_CV__(BOUND_OPT, ...) \
  CHECK_TYPE_ARRAY__(, BOUND_OPT, ,##__VA_ARGS__) \
  CHECK_TYPE_ARRAY__(const, BOUND_OPT, ,##__VA_ARGS__) \
  CHECK_TYPE_ARRAY__(volatile, BOUND_OPT, ,##__VA_ARGS__) \
  CHECK_TYPE_ARRAY__(const volatile, BOUND_OPT, ,##__VA_ARGS__) \

CHECK_TYPE_ARRAY_CV__(0);
/*
 * template <typename T, bool IsBase > struct check<T [0], IsBase> : check<T , true>
 * template <typename T, bool IsBase > struct check<T const [0], IsBase> : check<T const, true>
 * template <typename T, bool IsBase > struct check<T volatile [0], IsBase> : check<T volatile, true>
 * template <typename T, bool IsBase > struct check<T const volatile [0], IsBase> : check<T const volatile, true>
 * */
CHECK_TYPE_ARRAY_CV__(N, std::size_t N);
/*
 * template <typename T, bool IsBase , std::size_t N> struct check<T [N], IsBase> : check<T , true>
 * template <typename T, bool IsBase , std::size_t N> struct check<T const [N], IsBase> : check<T const, true>
 * template <typename T, bool IsBase , std::size_t N> struct check<T volatile [N], IsBase> : check<T volatile, true>
 * template <typename T, bool IsBase , std::size_t N> struct check<T const volatile [N], IsBase> : check<T const volatile, true>
 * */

// function 
template <typename T, bool IsBase, typename ... P>
struct check<T(P ...), IsBase> : check<T, true> {
  using base_t = check<T, true>;
  using check<T, true>::out_;

  Parameter<true, P ...> param_;
  Bracket<IsBase> bracket_;

  // Parameter 要先于 Bracket 构造，即初始化列表 param_在前面，这样才能在 
  // bracket_后析构，这样参数就能打印在正确的位置上
  check(const Output& out) : base_t(out), param_(out_), bracket_(out_) {}
};

// pointers to class members
template <typename T, bool IsBase, typename C> 
struct check<T C::*, IsBase> : check<T, true> {
  using base_t = check<T, true>;
  using base_t::out_;

  check(const Output& out) : base_t(out) {
    check<C> { out_ };
    out_.compact()("::*");
  }
};

// pointers to member functions
template <typename T, bool IsBase, typename C, typename ... P>
struct check<T (C::*)(P ...), IsBase> : check<T(P...), true> {
  using bast_t = check<T(P...), true>;
  using bast_t::out_;

  check(const Output& out) : bast_t(out) {
    check<C> { out_ };
    out_.compact()("::*");
  }
};

// 带 cv qualifer 的成员函数，const 或者 volatile 都是在函数的末尾，也就是说
// cv 的输出，实在 T(P...) 之后
struct at_destruct {
  Output& out_;
  const char* str_;

  at_destruct(Output& out, const char* str = nullptr) : out_(out), str_(str) {}

  ~at_destruct() { out_.compact()(str_); }

  void set_str(const char* str) { str_ = str; }
};

#define CHECK_TYPE_MEM_FUNC__(...) \
  template <typename T, bool IsBase, typename C, typename ... P> \
  struct check<T(C::*)(P ...) __VA_ARGS__, IsBase> { \
    at_destruct cv_; \
    check<T(P...), true> base_; \
    Output& out_ = base_.out_; \
    check(const Output& out) : cv_(base_.out_), base_(out) { \
      cv_.set_str(#__VA_ARGS__); \
      check<C> { out_ }; \
      out_.compact()("::*"); \
    } \
  }

// CHECK_TYPE_MEM_FUNC__();
CHECK_TYPE_MEM_FUNC__(const);
CHECK_TYPE_MEM_FUNC__(volatile);
CHECK_TYPE_MEM_FUNC__(const volatile);

template <typename T>
inline std::string check_type() {
  std::string str;
  check<T> {str};
  return std::move(str);
}

int main(int argc, char *argv[]) {
  std::cout << typeid(int).name() << std::endl;           // i
  std::cout << typeid(double).name() << std::endl;        // d
  std::cout << typeid(char*).name() << std::endl;         // Pc
  std::cout << typeid(char).name() << std::endl;          // c
  std::cout << typeid(Base).name() << std::endl;          // 4Base
  std::cout << typeid(Derived1).name() << std::endl;      // 8Derived1
  std::cout << typeid(Base*[10]).name() << std::endl;     // A10_P4Base
  std::cout << typeid(Derived1*[20]).name() << std::endl; // A20_P8Derived1
  std::cout << typeid(Base*(int)).name() << std::endl;    // FP4BaseiE
  std::cout << typeid(Base&).name() << std::endl;

  std::cout << "\n__cxa_demangle:" << std::endl;
  char* demangle_name;
  demangle_name = abi::__cxa_demangle(typeid(int).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(double).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(char*).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(char).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(Base).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(Derived1).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(Base*[10]).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(Derived1*[20]).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(Base*(int)).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);
  demangle_name = abi::__cxa_demangle(typeid(Base&).name(), nullptr, nullptr, nullptr);
  std::cout << std::string(demangle_name) << std::endl;
  free(demangle_name);

  // test cases
  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "const volatile void * const &" << std::endl;
  std::cout << check_type<const volatile void * const &>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "const int *" << std::endl;
  std::cout << check_type<const int*>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "volatile double" << std::endl;
  std::cout << check_type<volatile double>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "const char* &&" << std::endl;
  std::cout << check_type<const char* &&>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "int(*)[]" << std::endl;
  std::cout << check_type<int(*)[]>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "const volatile void * (const int&)" << std::endl;
  std::cout << check_type<const volatile void * (const int&)>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "const volatile void *(&)[10]" << std::endl;
  std::cout << check_type<const volatile void *(&)[10]>() << std::endl;
  
  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "int(*) []" << std::endl;
  std::cout << check_type<int(*) []>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "const int[]" << std::endl;  // check<int const []> : check<int const> : check<int>
  std::cout << check_type<const int[]>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "int[1][2][3]" << std::endl;
  std::cout << check_type<int[1][2][3]>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "char(* (* const)(const int(&)[10]) )[10]" << std::endl;
  std::cout << check_type<char(* (* const)(const int(&)[10]) )[10]>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "int(int, double, char*)" << std::endl;
  std::cout << check_type<int(int, double, char*)>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "int (Base::*)" << std::endl;
  std::cout << check_type<int Base::*>() << std::endl;

  std::cout << "\n================================================================\n" << std::endl;
  std::cout << "bool (Derived1::*)(int, const char*)" << std::endl;
  std::cout << check_type<bool (Derived1::*)(int, const char*)>() << std::endl;

  return 0;
}
