CFLAGS = -Wall -g
TARGET = main
OBJS = search.o delete.o register.o phoneBookMain.o print.o
all : $(TARGET)

%.o : %.c %.h
	gcc -c -o $@ ${CFLAGS} $<
$(TARGET) : $(OBJS)
	gcc -o $@ $^
clean :
	rm $(TARGET) $(OBJS)

