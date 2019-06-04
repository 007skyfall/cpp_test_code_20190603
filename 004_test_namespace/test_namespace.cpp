#include "iostream"
using namespace std;

//1 文件中iostream 没有引入标准的 std ; 需要我们程序员手工的写
//2 如果不写 using namespace std; 需要显示地引入std

void test01()
{
	std::cout<<"namespace test01"<<std::endl;
}

//3 定义命名空间

namespace  namespaceA
{
	int a = 10;
}

namespace  namespaceB
{
	int a = 20;
	namespace namespaceC
	{
		struct Teacher
		{
			char name[32];
			int age ;
		};
	}
}

//4 使用命名空间

int  main(void)
{
	using namespace namespaceA;
	using namespace namespaceB;
	cout<<namespaceA::a<<endl;
	cout<<namespaceB::a<<endl;

	//显示方式，需要写全
	{
		//namespaceB::namespaceC::Teacher t1;
		//t1.age = 28;
	}
	

	using namespaceB::namespaceC::Teacher;
	Teacher t2;
	t2.age = 29;
	cout << "t2.age:" << t2.age << endl;
return 0;
}
