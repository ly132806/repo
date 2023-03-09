#include <iostream>
using namespace std;

class AbstractCalculator
{
	public:
		virtual int Results()
		{return 0;}
		
		int m_A;
		int m_B;
};

class AddCalcularor:public AbstractCalculator
{
	public:
		int Results()
		{

			return m_A + m_B;
		}
};
class SubCalcularor:public AbstractCalculator
{
	public:
		int Results()
		{

			return m_A - m_B;
		}
};
class MulCalcularor:public AbstractCalculator
{
	public:
		int Results()
		{

			return m_A * m_B;
		}
};
void test()
{
	AbstractCalculator * calculator = new AddCalcularor;
	calculator->m_A = 100;
	calculator->m_B = 200;
	cout <<calculator->Results() << endl;
	delete calculator;
	calculator = new SubCalcularor;
	cout <<calculator->Results() << endl;
}
int main()
{
	test();
	return 0;
}
