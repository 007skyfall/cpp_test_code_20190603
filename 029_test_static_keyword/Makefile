SOURCE = $(wildcard *.cpp)
TARGETS = $(patsubst %.cpp, %, $(SOURCE))
 
CC = g++
CFLAGS = -Wall -g
 
all:$(TARGETS)
 
$(TARGETS):%:%.cpp
	$(CC) $< $(CFLAGS) -o $@
 
.PHONY:clean all
clean:
	-rm -rf $(TARGETS)

