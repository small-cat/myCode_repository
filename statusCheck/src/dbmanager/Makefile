CC = g++
MYSQL_CONFIG = $(shell mysql_config --include)
CXXFLAGS = -g -Wall -Werror
INCLUDES = -I../../include -L../../lib 
MYSQL_LIBS_PATH = $(shell mysql_config --libs | grep -o '\-L/[^ ]*') -lmysqlclient

LIBS = -lhiredis -rdynamic  

SOURCES = $(shell ls *.cpp)
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

CXXFLAGS += $(MYSQL_CONFIG)
CXXFLAGS += $(INCLUDES)
CXXFLAGS += $(LIBS)
CXXFLAGS += $(MYSQL_LIBS_PATH)

INSTALL_DIR = ../../bin/debug

.PHONY:all
all:$(OBJECTS)

%.o:%.cpp
	$(CC) $(CXXFLAGS) -c -o $@ $<
	@cp -af $@ $(INSTALL_DIR)

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
