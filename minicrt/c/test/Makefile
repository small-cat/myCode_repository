TARGET=mini_test
SOURCES=$(shell ls *.c)
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))

CFLAGS= -fno-builtin -nostdlib -fno-stack-protector

$(TARGET):$(OBJECTS)
	ld -static -e mini_crt_entry -o $@ ../entry.o $^ ../minicrt.a

%.o:%.c
	gcc -g -c $(CFLAGS) -o $@ $^

.PHOMY:clean
clean:
	$(RM) $(OBJECTS) $(TARGET) core
