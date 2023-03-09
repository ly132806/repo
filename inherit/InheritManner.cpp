#include <iostream>
using namespace std;

class Basel
{
	public:
		int m_A;
	protected:
		int m_B;
	private:
		int m_C;
};
class Son1 :public Basel
{
	public:
		void func()
		{
			m_A = 100;
			m_B = 11;
			//m_C = 12;
		}
};
class Son2 :protected Basel
{
	public:
		void func()
		{
			m_A = 22;
			m_B = 33;
		}
};
void test()
{
	Son1 s1;
	s1.m_A = 11;
	//s1.m_B = 22;
	Son2 s2;
	//s2.m_A = 11;



}
