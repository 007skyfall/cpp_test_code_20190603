#include "iostream" //包含c++的头文件 //iostream.h

using namespace std; //使用命名空间 std 标准的命名空间 (在这个命名空间中定义了很多标准定义)

//在C++中 定义了一个自定义数据类型
struct Circle01
{
	double	m_s; //圆的面积
	double	m_r; //圆的半径
};

//在C++中 定义了一个自定义数据类型 MyCicle 圆形
class MyCicle
{
public:  
	double	m_s; //圆的面积 属性 成员变量
	double	m_r; //圆的半径

public:
	void setR(double r) //成员函数
	{
		m_r = r;
	}

	double getR() //成员函数
	{
		return m_r;
	}
	double getS()
	{
		m_s = 3.14*m_r*m_r;
		return m_s;
	}
};

/*用面向对象的方法
  1 类的抽象 成员变量和成员函数 
  2 实例化 类的对象
  3 求面积
    面向过程加工的是 一个一个的函数 
	面向对象加工的是:一个一个的类
	类的调用 执行过程分析==>类代码不是一步一步执行
	类是一个数据类型,(固定大小内存块的别名); 定义一个类,是一个抽象的概念,不会给你分配内存，用数据类型定义变量的时候,才会分配内存
*/

int main(void)
{
	MyCicle	c; //用类 定义 变量 对象
	double	r;

	cout << "请输入c圆形的半径r:";
	cin >> r;
	//给圆形的属性赋值
	c.setR(r);
	cout << "c圆形的面积是:" << c.getS()<<endl;


return 0;
}






