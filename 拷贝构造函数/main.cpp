#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age)
	{
		M_Age = age;
		cout << "Person���вι��캯������" << endl;
	}
	Person(const Person &P)
	{
		M_Age = P.M_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person()
	{
		cout << "Person�������캯������" << endl;
	}

	int M_Age;
};

//�������캯�����õ�ʱ��

//1��ʹ��һ���Ѵ�����ϵĶ������еģ�����ʼ��һ���¶��󣨿�����
void test01()
{
	Person P1(20);
	Person P2(P1);

	cout << "p2��������" << P2.M_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person P)
{

}
void test02()
{
	Person P;
	doWork(P);
}

//3��ֵ��ʽ���ؾֲ�����
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