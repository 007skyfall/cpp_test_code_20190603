#include <iostream>
using namespace std;

//构造中调用构造是危险的行为
class MyTest
{
public:
	MyTest(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	MyTest(int a, int b)
	{
		this->a = a;
		this->b = b;

		MyTest(a, b, 100); //产生新的匿名对象
	}
	~MyTest()
	{
		printf("MyTest~:%d, %d, %d\n", a, b, c);
	}

protected:
private:
	int a;
	int b;
	int c;

public:
	int getC() const { return c; }
	void setC(int val) { c = val; }
};

int main(void)
{
	MyTest t1(1, 2);
	printf("c:%d", t1.getC()); //请问c的值是？
	return 0;
}