SOURCE = $(wildcard *.cpp)
TARGETS = $(patsubst %.cpp, %, $(SOURCE))
 
CC = g++
STRIP = strip
CFLAGS = -Wall -g -O2
 
all:$(TARGETS)
 
$(TARGETS):%:%.cpp
	$(CC) $< $(CFLAGS) -o $@
	$(STRIP) $@
 
.PHONY:clean all
clean:
	-rm -rf $(TARGETS)
