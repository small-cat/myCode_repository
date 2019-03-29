CC = g++
CFLAGS = -g -Wall -Werror
INCLUDES = -I../../include -L../../lib

SOURCES = $(shell ls *.cpp)
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

CFLAGS += $(INCLUDES) -llog4cplus
INSTALL_DIR = ../../bin/debug

.PHONY:all
all:$(OBJECTS)

%.o:%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	@cp -af $@ $(INSTALL_DIR)

sinclude .depend

.PHONY:depend
depend:
	$(CC) $(CFLAGS) -E -MM $(SOURCES) > .depend

.PHONY:install
install:
	cp -af $(OBJECTS) $(INSTALL_DIR)

.PHONY:clean
clean:
	$(RM) $(OBJECTS)
