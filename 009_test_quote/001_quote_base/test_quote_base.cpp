#include <iostream>
using namespace std;

//1 引用的概念 
//2 属于C++编译器对C的扩展,不能用c语言的语法去思考它
void test01()
{
	int  a = 10;

	//引用的语法：Type& name = var;
	int &b = a;

	b = 100; //相当于把a修改成100了.

	printf("b:%d \n", b);
	printf("a:%d \n", a);

	a = 200;
	printf("b:%d \n", b);
	printf("a:%d \n", a);

	cout<<"hello..."<<endl;
	return ;
}

void  test02()
{
	int a = 10;
	int &b = a;
	//int &c ; //03普通引用 必须要初始化
	return ;
}

//基础类型的引用 

void my_swap01(int a, int b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}

void my_swap02(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

//04 引用作为函数参数声明时不进行初始化
void my_swap03(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}
void  test03()
{
	int x, y ;
	x = 10;
	y = 20;

	my_swap01(x, y);
	printf("x:%d , y:%d \n", x, y);

	my_swap02(&x, &y);
	printf("x:%d , y:%d \n", x, y);

	//a就是x的别名  b就是y的别名
	my_swap03(x, y);
	printf("x:%d , y:%d \n", x, y);
	return ;
}

//05复杂数据类型 的引用
struct Teacher
{
	char name[64];
	int age ;
};

void printfT(Teacher *pT)
{
	cout<<pT->age<<endl;
}

//pT是t1的别名 ,相当于修改了t1
void printfT2(Teacher &pT)
{
	//cout<<pT.age<<endl;
	pT.age = 33;
}

//pT和t1的是两个不同的变量,进行的是浅拷贝操作
void printfT3(Teacher pT)
{
	cout<<pT.age<<endl;
	pT.age = 45; //只会修改pT变量 ,不会修改t1变量
}

int main(int argc, const char *argv[])
{
	Teacher t1;
	t1.age = 35;

	printfT(&t1);

	printfT2(t1); //pT是t1的别名
	printf("t1.age:%d \n", t1.age); //33

	printfT3(t1) ;// pT是形参 ,t1 copy一份数据 给pT     //---> pT = t1
	printf("t1.age:%d \n", t1.age); //35
	
	return 0;
}
