#include<iostream>
using namespace std;//c++的命名空间
class circle
{
public:
	double r;
	double pi = 3.1415926;
	double area = pi*r*r;
};

int main()
{
	circle c1;
	cout << "please input your r:" << endl;
	cin >> c1.r;

	cout << c1.area << endl;	//乱码

	return 0;
}
