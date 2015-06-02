CC = clang++
LD = clang++
CFLAG = -g -c
LDFLAG = -g
TARGET = main
OBJS = main.o  

$(TARGET):$(OBJS)
	$(LD) $(LDFLAG) -o $(TARGET) $(OBJS)

$(OBJS): main.cpp linklist.cpp linklist.h 

.PHONY: clean

clean:
	rm -f $(OBJS) $(TARGET)
