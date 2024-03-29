#include <iostream>
using namespace std;

void myPrint(int a)
{
	printf("a:%d \n", a);
}

void myPrint(char *p)
{
	printf("%s \n", p);
}

void myPrint(int a, int b)
{
	printf("a:%d ", a);
	printf("b:%d \n", b);
}


/*
//返回值 不是 判断函数重载的标准 
int myPrint(int a, int b)
{
	printf("a:%d ", a);
	printf("b:%d \n", b);
}
*/

//1 当函数名和不同的参数搭配时函数的含义不同
//2 函数重载的判断标准
//名称 参数 返回值
//名称相同 参数不一样(个数/类型/)

//3 返回值不是判断函数重载的标准

//4 重载函数的调用标准
void test01()
{
	char myp[] = "1122334455aa";
	myPrint(1);
	myPrint(myp);
	myPrint(1, 2);
	cout<<"hello..."<<endl;
	return ;
}

// 函数重载和函数默认参数在一起

void myfunc(int a, int b, int c = 0)
{
	printf("a:%d b:%d c:%d \n", a, b, c);
}

void myfunc(int a, int b)
{
	printf("a:%d b:%d\n", a, b);
}

void myfunc(int a)
{
	printf("a:%d\n", a);
}

int main(int argc,const char * argv[])
{
	test01();
	
	//myfunc(1, 2); //函数调用时,会产生二义性
	myfunc(1);
	
return 0;
}
