#include "iostream"
using namespace std;

struct Teacher
{
	char name[64];
	int age ;
};

//�ڱ����ú��� ��ȡ��Դ 
int getTeacher(Teacher **p)
{
	Teacher *tmp = NULL;
	if (p == NULL)
	{
		return -1;
	}
	tmp = (Teacher *)malloc(sizeof(Teacher));
	if (tmp == NULL)
	{
		return -2;
	}
	tmp->age = 33;
	// p��ʵ�εĵ�ַ  *ʵ�εĵ�ַ ȥ��ӵ��޸�ʵ�ε�ֵ
	*p = tmp; 
	return 0;
}


//ָ������� ����������
int getTeacher2(Teacher* &myp)
{
	//��myp��ֵ �൱�ڸ�main�����е�pT1��ֵ
	myp = (Teacher *)malloc(sizeof(Teacher));
	if (myp == NULL)
	{
		return -1;
	}
	myp->age = 36;
	return 0;
}

void FreeTeacher(Teacher *pT1)
{
	if (pT1 == NULL)
	{
		return ;
	}
	free(pT1);
}

int main(int argc, const char* argv[])
{
	Teacher *pT1 = NULL;

	//1 c�����еĶ���ָ��
	getTeacher(&pT1);
	cout<<"age:"<<pT1->age<<endl;
	FreeTeacher(pT1);


	//2 c++�е����� ��ָ������ã�
	//���õı��� ��Ӹ�ֵ��2������ ��c++�����������ǳ���Ա����
	getTeacher2(pT1);

	cout<<"age:"<<pT1->age<<endl;
	FreeTeacher(pT1);

	return 0;
}
