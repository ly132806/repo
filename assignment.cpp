#include <iostream>
using namespace std;

class Person
{
public:
	Person(char *name,int age)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name,name);
		this->m_Age = age;

	}

	char *m_Name;
	int m_Age;

};

void tset()
{
	Person p1("mack",11);
	Person p2("jere",22);
	p1.m_Age = 11;

	p1 = p2;

	cout << p1.m_Age << p1.m_Name << endl;
	cout << p2.m_Age << p2.m_Name << endl;
	cout << p1.m_Age << p1.m_Name << endl;
}
