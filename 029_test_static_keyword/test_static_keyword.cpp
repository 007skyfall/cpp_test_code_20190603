#include <iostream>
using namespace std;

class BB
{
public:
	void printC()
	{
		cout<<"c:"<<c<<endl;
	}
	void AddC()
	{
		c = c + 1;
	}
	static void getC() //静态成员函数 
	{
		cout<<"c:"<<c<<endl;
#if 0
	/test_static_keyword.cpp: In static member function ‘static void BB::getC()’:
test_static_keyword.cpp:18:14: error: invalid use of member ‘BB::a’ in static member function
  cout<<"a:"<<a<<endl;
              ^
test_static_keyword.cpp:22:6: note: declared here
  int a;
      ^
Makefile:10: recipe for target 'test_static_keyword' failed
make:*** [test_static_keyword] Error 1
#endif

	//cout<<"a:"<<a<<endl; 
	}
protected:
private:
	int a; 
	int b;
	static int c; //静态成员变量
};

//静态函数中 不能使用 普通成员变量 普通成员函数 ..
int BB::c = 10;

int main(void)
{
	
	BB b1, b2, b3;
	b1.printC(); //10
	b2.AddC(); //11
	b3.printC(); //11
	
	//静态成员函数的调用方法
	b3.getC(); //用对象.
	BB::getC();//类::

	cout<<"hello..."<<endl;
	
	return 0;
}
