CC=g++ 
STRIP=strip
OBJ=test_multi_circle_point
OBJS=test_multi_circle_point.cpp AdvCircle.cpp MyPoint.cpp
CFLAGS= -Wall -g -lm 
$(OBJ):$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	$(STRIP) $@
$*.o:$%.c
	$(CC) $(CFLAGS) -c $< -o $@ 
.PHONY:clean
clean:
	$(RM) *.o test_multi_circle_point
