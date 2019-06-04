CC=g++ 
STRIP=strip
OBJ=test_multi_class_base
OBJS=test_multi_class_base.cpp MyTeacher.cpp 
CFLAGS= -Wall -g -lm 
$(OBJ):$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	$(STRIP) $@
$*.o:$%.c
	$(CC) $(CFLAGS) -c $< -o $@ 
.PHONY:clean
clean:
	$(RM) *.o test_multi_class_base
