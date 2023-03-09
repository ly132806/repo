#include <cstddef>
#include <iostream>
using namespace std;

class Person
{
public:
	Person(){}
	Person(char *name,int age)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name,name);
		this->m_Age = age;
		cout << "构造调用" << endl;

	}
	Person(const Person& p1)
	{
		this->m_Name = new char[strlen(p1.m_Name) + 1];
		strcpy(this->m_Name,p1.m_Name);
		//this->m_Name = p1.m_Name;
		this->m_Age = p1.m_Age;

	}
	
	Person operator=(Person &p1)
	{
		if(this->m_Name != NULL)
		{
			delete [] this->m_Name;
			this->m_Name = NULL;
		}
		this->m_Name = new char[strlen(p1.m_Name) + 1];
		strcpy(this->m_Name,p1.m_Name);
		//this->m_Name = p1.m_Name;
		this->m_Age = p1.m_Age;
		return *this;
	}

	~Person()
	{
		if(this->m_Name != NULL)
		{
		delete [] m_Name;
			m_Name = NULL;
		}
		cout << "析构调用" << endl;
	}

	char *m_Name;
	int m_Age;

};

void tset()
{
	Person p1;
	Person p2("jere",22);
	Person p3 = p2;
	//p1.m_Age = 11;
	
	cout << "p1的地址"<< &p1 << endl;
	cout << "p2地址" << &p2 << endl;
	cout << "p3地址" << &p3 << endl;
	
	cout << "p1.name的地址"<< &(p1.m_Name) << endl;
	cout << "p2.name地址" << &(p2.m_Name) << endl;
	cout << "p3.name地址" << &(p3.m_Name) << endl;

	p1 = p2;

	cout << p1.m_Age << p1.m_Name << endl;
	cout << p2.m_Age << p2.m_Name << endl;
	cout << "p1address" << &p1 << endl;
	cout << "p2address" << &p2 << endl;
	cout << "p1.nameaddress" << &(p1.m_Name) << endl;
	cout << "p2.nameaddress" << &(p2.m_Name) << endl;

}

int main()
{
	tset();
	return 0;
}
