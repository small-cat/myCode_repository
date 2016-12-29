TARGET=get_stu_info

CFLAGS=-g -Wall -I.
SOURCES=$(shell ls *.c)
OBJECTS=$(patsubst %.c,%.o, $(SOURCES))

.PHONY:all
all:$(OBJECTS)
	@echo ""
	gcc $(CFLAGS) -o $(TARGET) $^
	@echo "Hints: Compiler $(TARGET) success"

sinclude .depend
.PHONY:depend
depend:
	gcc $(CFLAGS) -MM $(SOURCES) >> .depend

.PHONY:clean
clean:
	$(RM) $(OBJECTS) $(TARGET)
