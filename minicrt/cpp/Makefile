CC = gcc
CPP = g++
COMMON_FLAGS = -g -c -fno-builtin -nostdlib -fno-stack-protector
CPPFLAGS = -nostdinc++ -fno-rtti -fno-exceptions 

SOURCES = $(shell ls *.c*)

STATIC_LIB = minicrt.a
STATIC_LIB_OBJECTS = malloc.o \
					 printf.o \
					 stdio.o \
					 string.o \
					 mystring.o \
					 ctors.o \
					 atexit.o \
					 iostream.o \
					 new_delete.o \
					 sysdep.o
OBJECTS += $(STATIC_LIB_OBJECTS) crtbegin.o crtend.o entry.o

.PHONY:all
all:$(OBJECTS)

.PHONY:clean
clean:
	$(RM) $(OBJECTS) $(STATIC_LIB)

%.o:%.c
	$(CC) $(COMMON_FLAGS) -o $@ $<

%.o:%.cpp
	$(CPP) $(COMMON_FLAGS) $(CPPFLAGS) -o $@ $<

.PHONY:minicrt
minicrt:
	ar -rs $(STATIC_LIB) $(STATIC_LIB_OBJECTS)

