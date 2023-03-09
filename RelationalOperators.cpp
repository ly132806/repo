#include <iostream>
using namespace std;
#include <string.h>
class Person
{
	public:
		Person(string name,int ang)
		{
			this->m_Name = name;
			this->m_Ang = ang;
		}
		bool operator==(Person& p)
		{
			if(this->m_Ang == p.m_Ang && this->m_Name == p.m_Name)
			{
				return true;

			}
			else
			{
				return false;

			}
		}
		string m_Name;
		int m_Ang;
};

void test()
{
	Person p1("mark",11);
	Person p2("mark",11);
	if(p1 == p2)
	{
		cout << "p1 = p2" << endl;

	}
	else
	{
		cout << "p1 != p2" << endl;

	}
	if(p1.m_Name == p2.m_Name)
	{
		cout << "p1 = p2" << endl;

	}
	else {

		cout << "p1 != p2" << endl;
	}
	if(p1.m_Ang == p2.m_Ang)
	{
		cout << "p1 = p2" << endl;

	}
	else {

		cout << "p1 != p2" << endl;
	}
		cout << "p1 & p2" << p1.m_Ang << p2.m_Ang << endl;

}

int main()
{
	test();
}
