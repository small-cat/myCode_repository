CC = gcc
CCPLUS = g++
CFLAGS = -g -Wall -Werror
INCLUDES = -I../../include -L../../lib

INSTALL_DIR = ../../bin/debug
CFLAGS += $(INCLUDES)

OBJECTS = list_queue.o \
		  datamanager.o \

CSOURCE = $(shell ls *.c)
CPLUSSOURCE = $(shell ls *.cpp)

.PHONY:all
all:$(OBJECTS)

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<
	@cp -af $@ $(INSTALL_DIR)

%.o:%.cpp
	$(CCPLUS) $(CFLAGS) -c -o $@ $<
	@cp -af $@ $(INSTALL_DIR)

sinclude .depend
.PHONY:depend
depend:
	$(CC) $(CFLAGS) -E -MM $(CSOURCE) > .depend
	$(CCPLUS) $(CFLAGS) -E -MM $(CPLUSSOURCE) >> .depend

.PHONY:install
install:
	cp -af $(OBJECTS) $(INSTALL_DIR)

.PHONY:clean
clean:
	$(RM) $(OBJECTS)
