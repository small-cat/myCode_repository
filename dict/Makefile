TARGET = wordcount

CFLAGS = -g -I. -Wall -Werror
SOURCE = $(shell ls *.c)
OBJECT = $(patsubst %.c, %.o, $(SOURCE))
CC = gcc

.PHONY:all
all:$(OBJECT)
	$(CC) $(CFLAGS) -o $(TARGET) $^

sinclude $(SOURCE:.c=.d)

%.d:%.c
	set -e; rm -rf $@; \
	$(CC) $(CFLAGS) -MM $< > $@.$$$$; \
	sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $@.$$$$ > $@; \
	rm -rf $@.$$$$;

.PHONY:clean
clean:
	$(RM) $(OBJECT) $(TARGET)
