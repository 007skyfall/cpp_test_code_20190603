#include <iostream>
using namespace std;

class A
{
public:
	A(int _a)
	{
		a = _a;
		cout << "构造函数" << "a" << a << endl;
	}

	~A()
	{
		cout << "析构函数" << "a" << a << endl;
	}

protected:
private:
	int a;
};


//1 构造函数的初始化列表  解决: 在B类中 组合了一个 A类对象 (A类设计了构造函数)
//根据构造函数的调用规则 设计A的构造函数, 必须要用;没有机会初始化A
//新的语法  Constructor::Contructor() : m1(v1), m2(v1,v2), m3(v3)
class B
{
public:
	B(int _b1, int _b2) : a1(1), a2(2), c(0)
	{

	}

	B(int _b1, int _b2, int m, int n) : a1(m), a2(n), c(0)
	{
		b1 = _b1;
		b2 = _b2;
		cout <<"B的构造函数"<<endl;
	}
	~B()
	{
		cout<<"B的析构函数" <<endl;
	}

protected:
private:
	int b1;
	int b2;
	A a2;
	A a1;
	const int c;
};


//2 先执行 被组合对象的构造函数 
//如果组合对象有多个,按照定义顺序, 而不是按照初始化列表的顺序

//析构函数 : 和构造函数的调用顺序相反

//3 被组合对象的构造顺序 与定义顺序有关系 ,与初始化列表的顺序没有关系.
//4 初始化列表 用来 给const 属性赋值 
void objplay()
{
	
	A a1(10);
	B ojbB(1, 2);

	//参数传递 
	B ojbB2(1, 2,3, 4);

	//调用顺序
	return ;
}

int main(void)
{
	objplay();
	return 0;
}