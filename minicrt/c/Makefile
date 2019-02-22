CC=gcc
CFLAGS=-g -c -fno-builtin -nostdlib -fno-stack-protector
SOURCES=$(shell ls *.c)

STATIC_LIB=minicrt.a

OBJECTS=$(patsubst %.c, %.o, $(SOURCES))

.PHONY:all
all:$(OBJECTS)

.PHONY:clean
clean:
	$(RM) $(OBJECTS) $(STATIC_LIB)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY:minicrt
minicrt:
	ar -rs $(STATIC_LIB) malloc.o printf.o stdio.o string.o

