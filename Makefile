CC = g++
DEBUG = -g
CFLAGS = -std=c++11 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
HEADERS = node.h common.h linked_list.h

SRC = main.cpp linked_list.cpp

OBJS = main.o linked_list.o node.o

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o dsa_example

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

linked_list.o: linked_list.cpp 
	$(CC) $(CFLAGS) linked_list.cpp

node.o: node.cpp 
	$(CC) $(CFLAGS) node.cpp

clean:
	rm *.o dsa_example