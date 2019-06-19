
#include <iostream>
using namespace std;

//public 修饰的成员变量 方法 在类的内部 类的外部都能使用
//protected: 修饰的成员变量 方法,在类的内部使用 ,在继承的子类中可用 ;其他 类的外部不能被使用
//private: 修饰的成员变量方法 只能在类的内部使用 不能在类的外部

//派生类访问控制的结论
//1 protected 关键字 修饰的成员变量 和成员函数 ,是为了在家族中使用 ,是为了继承
//2 项目开发中 一般情况下 是 public


class Parent
{
public:
	int a; //老爹的名字
protected:
	int b; //老爹的银行密码
private:
	int c; //老的情人
};


//保护继承
class Child3 : protected Parent
{
public:
protected:
private:
public:
	void useVar()
	{
		a = 0; // ok
		b = 0; // ok //b这里 写在了子类Child3的内部  2看protected 3密码===>protected
		//c = 0; //err
	}
};

void test03()
{
	Child3 c3;
	//c3.a = 10; //err
	//c3.b = 20; //err
	//c3.c = 30;//err

}



//私有继承
class Child2 : private Parent
{
public:
	void useVar()
	{
		a = 0; //ok
		b = 0; //ok
		//c = 0; // err
	}

protected:
private:
};

void test02()
{
	Child2 c2;
	//c1.a = 10; err
	//c2.b = 20; err
	//c3.b = 30;
}



class Child : public Parent
{
public:
	void useVar()
	{
		a = 0; //ok
		b = 0; //ok
		//c = 0; // err
	}

protected:
private:
};


/*
C++中的继承方式（public、private、protected）会影响子类的对外访问属性
判断某一句话，能否被访问
1）看调用语句，这句话写在子类的内部、外部
2）看子类如何从父类继承（public、private、protected）
3）看父类中的访问级别（public、private、protected）
*/
//共有继承 
void test01()
{
	Parent t1, t2;
	t1.a = 10; //ok
	//t1.b = 20; //err
	//t2.c = 30 ; //err
	return;
}

int main()
{
	test01();
	cout << "------------------------------------" << endl;
	test02();
	cout << "------------------------------------" << endl;
	test03();
	cout << "------------------------------------" << endl;
	system("pause");
	return 0;
}