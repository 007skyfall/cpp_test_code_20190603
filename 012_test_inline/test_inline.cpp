#include <iostream>
using namespace std;

inline void printA()
{
	int a = 10;
	cout<<"a"<<a<<endl;
}

void test01()
{
	printA();
	//C++编译器直接将函数体插入在函数调用的地方
	//内联函数省去了普通函数调用时压栈，跳转和返回的开销 
	cout<<"hello..."<<endl;
	return ;
}


//带参数的宏
#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))  

inline int myfunc(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int a = 1;
	int b = 3;
	int c = myfunc(++a, b);  // a=2 b=3 c=2
	int d = MYFUNC(++a, b); //==>宏替换并展开 ((++a) < (b) ? (++a) : (b))  //a=3 b=3 c=3

	printf("a = %d b = %d c = %d\n", a,b,c); 
	printf("a = %d b = %d c = %d\n", a,b,d); 

	return 0;
}
