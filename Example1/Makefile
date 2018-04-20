CXX = g++

CFLAGS = -g

OBJS = Ex1.o

TARGET = main

%.o: %.cpp
	$(CXX) -c $(CFLAGS) -o $@ $<

all: $(OBJS)
	$(CXX) $(CFLAGS) -o $(TARGET) $(OBJS)


clean:
	rm $(TARGET) $(OBJS)
