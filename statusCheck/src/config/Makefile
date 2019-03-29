CC=g++
CXXFLAGS = -g -Wall -Werror
INCLUDES = -I../../include -L../../lib #-DDEBUG_TEST

INSTALL_DIR = ../../bin/debug

CXXFLAGS += $(INCLUDES)

SOURCES = MyStr.cpp ConfigManager.cpp
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

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
