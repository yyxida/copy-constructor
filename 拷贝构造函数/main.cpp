#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age)
	{
		M_Age = age;
		cout << "Person的有参构造函数调用" << endl;
	}
	Person(const Person &P)
	{
		M_Age = P.M_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构造函数调用" << endl;
	}

	int M_Age;
};

//拷贝构造函数调用的时机

//1，使用一个已创建完毕的对象（已有的）来初始化一个新对象（拷贝）
void test01()
{
	Person P1(20);
	Person P2(P1);

	cout << "p2的年龄是" << P2.M_Age << endl;
}

//2，值传递的方式给函数参数传值
void doWork(Person P)
{

}
void test02()
{
	Person P;
	doWork(P);
}

//3，值方式返回局部对象
Person doWork02()
{
	Person P1;
	cout << (int*)&P1 << endl;
	return P1;

}

void test03()
{
	Person P = doWork02();
	cout << (int*)&P << endl;

}
int main()
{
	//test01();
	//test02();
	test03();
	return 1;
}