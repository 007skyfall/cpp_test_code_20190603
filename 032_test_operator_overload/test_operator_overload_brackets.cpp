#include <iostream>
using namespace std;

class Test
{
public:
	int operator() (int a, int b)
	{
		return a*a + b*b;
	}
};

class Test2
{
public:
	int MemFunc(int a, int b)
	{
		return a*a + b*b;
	}
};

int main(void)
{
	
	Test f;
	f(2, 4);

	Test2 f2;
	f2.MemFunc(2, 4);
	//operator() (int a, int b)

	cout<<"hello..."<<endl;
	return 0;
}
