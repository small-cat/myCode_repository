CC = g++
CXXFLAGS = -g -Wall -Werror
INCLUDES = -I../../include -L../../lib

CXXFLAGS += $(INCLUDES)
INSTALL_DIR = ../../bin/debug

SOURCES = $(shell ls *.cpp)
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))

.PHONY:all
all:$(OBJECTS)

sinclude .depend
.PHONY:depend
depend:
	$(CC) $(CXXFLAGS) -E -MM $(SOURCES) > .depend

.PHONY:install
install:
	cp -af $(OBJECTS) $(INSTALL_DIR)

.PHONY:clean
clean:
	$(RM) $(OBJECTS)
