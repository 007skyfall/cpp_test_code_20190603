#include <iostream>
using namespace std;

class Test
{
public:
	void init(int _a, int _b)
	{
		a = _a;
		b = _b;
	}

protected:
private:
	int a;
	int b;
};


int main(int argc,const char * argv[])
{
	
	//��û���ṩ���캯��,c++���������Զ������ṩһ��Ĭ�ϵĹ��캯��
	//��û���ṩ�������캯��,c++���������Զ�������Ա�ṩһ��Ĭ�ϵ�copy���캯��  = 
	Test t1; 
	int a = 10; 
	int b = 20;
	t1.init(a, b);

	Test tArray[3];
	tArray[0].init(1, 2);
	tArray[1].init(1, 2);
	tArray[2].init(1, 2);

	Test t21;  t21.init(1, 2);
	Test t22;	t22.init(1, 2);
	Test t23;	t23.init(1, 2);

	//�����ֳ���֮�� ��ʾ�ĳ�ʼ������ �Եú�����
	Test tArray2[3] = {t21, t22, t23};

	//�����ֳ���֮��,���㲻��ʵ�ʵı����Ҫ
	Test tArray3[1999] = {t21, t22, t23};
	
	cout<<"hello..."<<endl;

	return 0;
}