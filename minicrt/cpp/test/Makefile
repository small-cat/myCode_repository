TARGET = mini_crt++
SOURCES = $(shell ls *.cpp)
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))

CPPFLAGS = -nostdinc++ -fno-rtti -fno-exceptions -fno-builtin -nostdlib -fno-stack-protector

$(TARGET):$(OBJECTS)
	ld -static -e mini_crt_entry -o $@ ../entry.o ../crtbegin.o $^ ../minicrt.a ../crtend.o

%.o:%.cpp
	g++ -g -c $(CPPFLAGS) -o $@ $^

.PHOMY:clean
clean:
	$(RM) $(OBJECTS) $(TARGET) core
