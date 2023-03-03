#include <climits>
#include <cstddef>
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->m_Age = age;
		cout << "构造函数调用" << endl;
	}

	void showAge()
	{
		cout << this->m_Age << endl;
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
	}
	int m_Age;
};

class SmartPoint
{
public:
	SmartPoint(Person *person)
	{
		this->m_person = person;
	}
	//重载箭头 → 运算符
	Person* operator->()
	{
		return m_person;
	}
	//重载⭐ 运算符
	Person& operator*()
	{
		return *this->m_person;
	}

	~SmartPoint()
	{
		if(this->m_person)
		{
			delete m_person;
			m_person = NULL;

		}
	}
private:
	Person *m_person;
};

void test()
{
	Person *p = new Person(100);
	p->showAge();
	(*p).showAge();
	delete p;

	SmartPoint sp(new Person(18));
	sp->showAge();
	(*sp).showAge();
}

int main()
{
	test();
}
