//#include <iostream>
#include "mystring.h"
#include <iostream>
using namespace std;

void test()
{
	MyString str1 = "asd";
	MyString str2(str1);
	cout << str1.m_Leg;
	cout << str1 << endl;
	cout << str1.m_Str << str1.m_Leg << endl;
	cout << str2.m_Str << str2.m_Leg << endl;
	cin >> str2;
	cout << str2.m_Str << str2.m_Leg << endl;
	str1[1] = 'E';
	cout << str1.m_Str << str1.m_Leg << endl;
	char a = str2[0];
	cout << "a = " << a << endl;
	str1 = str1 + "CVB";
	cout << str1 << endl;
	str2 = str2 + str1;
	cout << str2 << endl;
	if(str1 == str2)
	{
		cout << "str1 = str2" << endl;
	}
	else {
		cout << "str1 != str2" << endl;
}
}
int main()
{
	test();
	return 0;
}
