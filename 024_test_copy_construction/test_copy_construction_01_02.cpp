#include <iostream>
using namespace std;

class Test
{
public:
	Test()  //无参数构造函数
	{
		m_a = 0;
		m_b = 0;
		cout<<"无参数构造函数"<<endl;
	}

	Test(int a)
	{
		m_a = a;
		m_b = 0;
	}

	Test(int a, int b) //有参数构造函数   //3种方法
	{
		m_a = a;
		m_b = b;
		cout<<"有参数构造函数"<<endl;
	}

	//赋值构造函数 (copy构造函数) 
	Test(const Test& obj )
	{
		cout<<"我也是构造函数 " <<endl;
		m_b = obj.m_b + 100;
		m_a = obj.m_a + 100;
	}

public:
	void printT()
	{
		cout<<"普通成员函数"<<endl;
		cout<<"m_a"<<m_a<<" m_a"<<m_b<<endl;
	}
private:
	int m_a;
	int m_b;
};

//1  赋值构造函数 用1个对象去初始化另外一个对象  
void test01()
{
	Test t1(1, 2);
	Test t0(1, 2);

	//赋值=操作 会不会调用构造函数
	t0 = t1; //用t1给t0赋值, 等号操作和初始化是两个不同的概念

	//第1种调用方法
	Test t2 = t1; //用t1来初始化t2 
	t2.printT();
	
	cout<<"hello..."<<endl;
	return ;
}

//第二种调用时机
int main(void)
{
	Test t1(1, 2);
	Test t0(1, 2);

	Test t2(t1);  //用t1对象初始化t2对象 
	t2.printT();

	cout<<"hello..."<<endl;
	return 0 ;
}