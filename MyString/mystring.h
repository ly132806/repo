#include <iostream>
using namespace std;

class MyString
{
	public:
		friend ostream & operator<<(ostream & cout,MyString & str);
		friend istream& operator>>(istream & cin,MyString& str);
		char& operator[](int i);
		MyString  operator+(const char * str);
		MyString  operator+(const MyString & str);
		bool  operator==(const MyString & str);

		MyString(char *str);
		MyString(const MyString &str);
		~MyString();

	//private:
public:
		char * m_Str;
		int m_Leg;
};
