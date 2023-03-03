#include <iostream>
using namespace std;

class Subsub
{
	public:
friend ostream& operator<<(ostream& cout,Subsub p1);
		Subsub()
		{
			m_Num = 8;
		}
Subsub operator--()
{
	this->m_Num--;
	return *this;
}
Subsub operator--(int)
{
	Subsub tmp = *this;
	this->m_Num--;
	return tmp;
}
	private:

		int m_Num;
};

ostream& operator<<(ostream& cout,Subsub p1)
{
	cout << p1.m_Num;
	return cout;
}
void test()
{
	Subsub p1;
	cout << p1-- << endl;
	cout << --p1 << endl;
}
int main()
{
	test();
}
