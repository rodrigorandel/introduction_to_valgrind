CXX = g++

CFLAGS = -g

OBJS = Ex4.o

%.o: %.cpp
	$(CXX) -c $(CFLAGS) -o $@ $<

all: $(OBJS)
	$(CXX) $(CFLAGS) -o main $(OBJS)


clean:
	rm -fr Ex4 $(OBJS)
