#include "iostream"

using namespace std;

/*
��Բ�ε����
��װ��2�㺬��:�����Ժͷ������з�װ  �����Ժͷ������з��ʿ���
����ڲ�������ⲿ
��ķ��ʿ��ƹؼ���
public:  ���εĳ�Ա�����ͺ��� ����������ڲ�������ⲿ����
private:  ���εĳ�Ա�����ͺ��� ֻ��������ڲ�������,����������ⲿ����
protected:  ���εĳ�Ա�����ͺ��� ֻ��������ڲ�������,����������ⲿ����, ���ڼ̳�����
*/

class MyCircle
{
public:
	double m_r; //���� ��Ա����
	double m_s;

public:
	double getR()
	{
		return m_r;
	}
	void setR(double r) //��Ա����
	{
		m_r = r;
	}

	double getS()
	{
		m_s = 3.14*m_r*m_r;
		return  m_s;
	}
protected:
private:
};

//���װ�ĳ�Ա�����ͳ�Ա����  //���Ե�����ĳ�Ա����
void printCircle01(MyCircle *pC)
{
	cout<<"r"<<pC->getR()<<endl;
	cout<<"s"<<pC->getS()<<endl;
}

void printCircle02(MyCircle &myc)
{
	cout<<myc.getS()<<endl;
}


void printCircle03(MyCircle myc)
{

}
void test01()
{
	MyCircle c1, c2;
	c1.setR(10);
	cout<<"c1 s: "<<c1.getS()<<endl;

	c1.setR(11);
	printCircle01(&c1);

	c2.setR(20);
	printCircle01(&c2);

	//����
	printCircle02(c2);

	cout<<"hello...."<<endl;
}

class MyAdvCircle
{
private:
	double m_r2; //û��Ȩ�����εĳ�Ա����������Ĭ����˽������

private:
	double m_r; //���� ��Ա����
	double m_s;  //�൱��������п�����

public:
	double getR()  //�������
	{
		return m_r;
	}
	void setR(double r) //��Ա����
	{
		m_r = r;
	}

	double getS()
	{
		m_s = 3.14*m_r*m_r;
		return  m_s;
	}
};

void test02()
{
	MyAdvCircle c1, c2;
	c1.setR(10);
	return ;
}

struct AAA
{
	int a;  //��struct�ؼ��ֶ������,��д,Ĭ��������public��
			//class�ؼ��ֶ������,��д,Ĭ��������private��
public:
protected:
private:
};

int main(int argc,const char * argv[])
{
	test01();
	cout << "**************************************************" << endl;
	test02();
	
	AAA a1;
	a1.a = 11;

	return 0;
}