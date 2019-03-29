CC = g++
CXXFLAGS = -Wall -Werror -g -D_VERSION_="DownCheck 1.1.0 Beta (CMSZ) 201803" -DTEST_ENV
INCLUDE = -I../../include -L../../lib -rdynamic  

MYSQL_CONFIG = $(shell mysql_config --include)
MYSQL_LIBS_PATH = $(shell mysql_config --libs | grep -o '\-L/[^ ]*') -lmysqlclient

LIBS = -lhiredis -lpthread

CXXFLAGS += $(MYSQL_CONFIG)
CXXFLAGS += $(INCLUDE)
CXXFLAGS += $(LIBS)
CXXFLAGS += $(MYSQL_CONFIG)

INSTALL_DIR = ../../bin/debug

SOURCE = main.cpp
OBJECTS = main.o

.PHONY:all
all:$(OBJECTS)

sinclude .depend
.PHONY:depend
depend:
	$(CC) $(CXXFLAGS) -E -MM $(SOURCE) > .depend

.PHONY:install
install:
	cp -af $(OBJECTS) $(INSTALL_DIR)


.PHONY:clean
clean:
	$(RM) $(OBJECTS)
