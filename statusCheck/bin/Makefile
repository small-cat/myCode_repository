TARGET = downcheck
CC = g++
CXXFLAGS = -Wall -Werror -g -DTEST_ENV

INCLUDE = -I../include
MYSQL_CONFIG = $(shell mysql_config --include)
LIBS =  -L../lib -lhiredis -llog4cplus 

#MYSQL_LIBS = $(shell mysql_config --libs | grep -o '\-L/[^ ]*') -lmysqlclient -lpthread
MYSQL_LIBS = $(shell mysql_config --libs)

OBJECTS = $(shell ls debug/*.o)
$(TARGET):$(OBJECTS)
	$(CC) $(CXXFLAGS) -o $@ $^ $(INCLUDE) $(MYSQL_CONFIG) $(MYSQL_LIBS) $(LIBS) 

.PHONY:clean
clean:
	$(RM) $(TARGET) $(OBJECTS)

