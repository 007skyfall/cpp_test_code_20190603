#include <iostream>
using namespace std;

/*	在C语言中,表达式的结果放在寄存器中
	在C语言中, 表达式的返回值，是变量的值
	在C++中, 表达式返回的是变量的本身 
	让表达式返回一个内存空间，内存首地址；在C语言中如何实现c++的效果？
	c++编译器 帮我们程序员完成了 取地址的工作 
*/
void test01()
{
	int a = 11;
	int b = 22;
	* ( a < b ? &a : &b ) = 33;
	printf("a = %d, b = %d\n", a, b);
	return ;
}

int main(int argc, const char *argv[])
{
	int a = 10;
	int b = 20;

	//返回一个最小数 并且给最小数赋值成3
	//三目运算符是一个表达式 ，表达式不可能做左值
	(a < b ? a : b )= 30;

	printf("a = %d, b = %d\n", a, b);
	
	test01();
	return 0;
}


