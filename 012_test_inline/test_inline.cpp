#include <iostream>
using namespace std;

inline void printA()
{
	int a = 10;
	cout<<"a"<<a<<endl;
}

void test01()
{
	printA();
	//C++������ֱ�ӽ�����������ں������õĵط�
	//��������ʡȥ����ͨ��������ʱѹջ����ת�ͷ��صĿ��� 
	cout<<"hello..."<<endl;
	return ;
}


//�������ĺ�
#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))  

inline int myfunc(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int a = 1;
	int b = 3;
	int c = myfunc(++a, b);  // a=2 b=3 c=2
	int d = MYFUNC(++a, b); //==>���滻��չ�� ((++a) < (b) ? (++a) : (b))  //a=3 b=3 c=3

	printf("a = %d b = %d c = %d\n", a,b,c); 
	printf("a = %d b = %d c = %d\n", a,b,d); 

	return 0;
}
