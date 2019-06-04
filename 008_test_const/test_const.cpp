#include <iostream>
using namespace std;

//0 const的基础知识
struct Teacher
{
	char name[64];
	int age;
};

//指针所指向的内存空间,不能被修改
int  operatorTeacher01(const Teacher *pT)
{
	//pT->age = 10; //error
	return 0;
}

//指针变量本身不能被修改
int  operatorTeacher02( Teacher * const pT)
{
	pT->age = 10;
	//pT = NULL; //error
	return 0;
}

//全部不可以修改，指向常量的常指针
int  operatorTeacher03( const Teacher * const pT)
{
	//pT->age = 10; //error
	//pT = NULL; //error
	printf("age:%d", pT->age);
	return 0;
}


void test01()
{
 	const int *c = NULL;  //const修饰的是指针所指向的内存空间,不能被修改
	int * const d =NULL; //
	const int * const e = NULL;
	cout<<"hello..."<<endl;

	Teacher t1;
	t1.age = 33;
	operatorTeacher03(&t1);

	return ;
}

//c语言中的const是一个冒牌货
//C++语言中const是一个真正的常量 
//const int b = 10; 符号表

void test02()
{
	//好像 a 是一个常量
	const int a = 10;
	int *p = NULL;
	p = (int *)&a;

	*p = 20;  //间接赋值 

	printf("a:%d \n", a);
	printf("*p:%d \n", *p);

}

//3 const分配内存的时机 编译器编译器期间 
void test03()
{

	int a;
	const int b = 10;
	int c; 

	printf("&a:%d, &b:%d, &c:%d \n", &a, &b, &c);
	
}

//4 const 和 #define的相同之处
//#define, 在编译预处理阶段处理
//const常量是由编译器处理的，提供类型检查和作用域检查

//5 const定义的变量,由编译器处理的，提供类型检查和作用域检查
void fun1()
{
	#define a 10
	const int b = 20;
	//#undef  a 卸载宏定义a 
	//# undef
}

void fun2()
{
	printf("a = %d\n", a);
	//printf("b = %d\n", b);
}

int main(int argc,const char *argv[])
{
	test01();
	cout << endl << endl;
	test02();
	cout << endl << endl;
	test03();
	cout << endl << endl;
	fun1();
	cout << endl << endl;
	fun2();
	
return 0;
}

