#include <iostream>
using namespace std;
/* *********************************************************************
malloc	free	c语言的函数
new		delete 	操作符	c++的语法
new 基础类型变量  分配数组变量  分配类对象
**********************************************************************/	
//分配基础类型
void test01()
{
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	free(p);

	int *p2 = new int; //分配基础类型
	*p2 = 20;
	free(p2);
	int *p3 = new int(30);
	printf("*p3:%d \n", *p3);
	delete p3;

	cout<<"test01 is over..."<<endl;
	return ;
}

//分配数组变量
void test02()
{
	//c语言分配数组
	int *p = (int *)malloc(sizeof(int) * 10);  //int array[10];
	p[0] = 1;
	free(p);

	//c++分配数组 
	int *pArray = new int[10] ;
	pArray[1] = 2;
	delete [] pArray; //数组不要把[] 忘记

	char *pArray2 = new char[25] ; //char buf[25]
	delete [] pArray2;
	
	cout<<"test02 is over..."<<endl;
	return ;
}

class Test
{
public:
	Test(int _a)
	{
		a = _a;
		cout<<"构造函数执行" <<endl;
	}

	~Test()
	{
		cout<<"析构函数执行" <<endl;
	}

protected:
private:
	int a;
};

//分配对象new delete
//相同 和 不同的地方 new能执行类型构造函数   delete操作符 能执行类的析构函数
int main(void)
{
	//c 
	Test *pT1 = (Test *)malloc(sizeof(Test));
	free(pT1);

	//c++
	Test *pT2 = new Test(10);
	delete pT2;

	cout<<"hello..."<<endl;
	return 0;
}
