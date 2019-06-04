CC=g++ 
STRIP=strip
OBJ=test_func_ptr_overload
OBJS=test_func_ptr_overload.cpp 
CFLAGS= -Wall -g -lm 
$(OBJ):$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	$(STRIP) $@
$*.o:$%.c
	$(CC) $(CFLAGS) -c $< -o $@ 
.PHONY:clean
clean:
	$(RM) *.o test_func_ptr_overload
