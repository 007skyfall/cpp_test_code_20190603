#include <iostream>
using namespace std;

int main(int argc,const char *argv[])
{
	bool b1 = true;  //告诉c++编译器分配 1个字节的内存
	cout<<"sizeof(bool):"<<sizeof(bool)<<endl;
	
	//bool变量 1 或者 0
	b1 = 10;
	cout<<"bl:" <<b1<<endl;
	b1 = -10;
	cout<<"bl:" <<b1<<endl;

	b1 = 0;
	cout<<"bl:" <<b1<<endl;
	
	cout<<"hello..."<<endl;
	
	return 0;
}
