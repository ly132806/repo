#include "mystring.h"
#include <cstddef>

MyString::MyString(char *str)
{
	this->m_Str = new char[strlen(str) + 1];
	strcpy(this->m_Str,str);
	this->m_Leg = strlen(str);
	cout << "parameterConstructor" << endl;
}
MyString::MyString(const MyString & str)
{
	this->m_Str = new char[strlen(str.m_Str)+1];
	strcpy(this->m_Str,str.m_Str);
	this->m_Leg = str.m_Leg;
	cout << "copyConstructor" << endl;
	
}
ostream& operator<<(ostream & out,MyString& str)
{
	cout << str.m_Str;
	return cout;
}
istream& operator>>(istream & cin,MyString& str)
{
	if(str.m_Str != NULL)
	{
		delete str.m_Str;
		str.m_Str = NULL;
	}
	char tmp[1024];
	cin >> tmp;
	str.m_Str = new char[strlen(tmp) + 1];
	strcpy(str.m_Str,tmp);
	str.m_Leg = strlen(str.m_Str);
	return cin;
}
char& MyString::operator[](int i)
{
	return m_Str[i];
}
MyString  MyString::operator+(const char *str)
{
	int newSize = this->m_Leg + strlen(str) + 1;
	char* temp = new char[newSize];
	memset(temp,0,newSize);
	strcat(temp,this->m_Str);
	strcat(temp,str);
	MyString newStr = temp;
	delete [] temp;
	return newStr;
}
MyString MyString::operator+(const MyString & str)
{
	int newSize = this->m_Leg + strlen(str.m_Str) + 1;
	char* temp = new char[newSize];
	memset(temp,0,newSize);
	strcat(temp,this->m_Str);
	strcat(temp,str.m_Str);
	MyString newStr = temp;
	delete [] temp;
	return newStr;
}
bool MyString::operator==(const MyString & str){
	//if(strcmp(this->m_Str,str.m_Str))
	//{
	//	return false;
	//}
	//else {
	//return true;
	//}
	return !strcmp(this->m_Str,str.m_Str);
}
MyString::~MyString()
{
	if(this->m_Str != NULL)
	{
		delete [] this->m_Str;
		this->m_Str = NULL;
		cout << "Destructor" << endl;
	}
}
