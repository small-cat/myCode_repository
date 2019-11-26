#ifndef X3000_PARSER_IPARSER_H__
#define X3000_PARSER_IPARSER_H__

#include <string>
#include <vector>

namespace parser {
struct OperateObject {
  std::string objectName;
  std::vector<std::string> subObjectName;

  void clear() {
    objectName.clear();
    subObjectName.clear();
  }
};

struct OperateInfo {
  std::string operate;
  std::string objectType;
  std::vector<OperateObject> objects;

  void clear() {
    operate.clear();
    objectType.clear();
    objects.clear();
  }
};

class IParser  {
public:
  IParser();
  virtual ~IParser();

  virtual bool Init();
  virtual std::vector<OperateInfo> Parse(const std::string &operateStr);
};
}

#endif // X3000_PARSER_IPARSER_H__
