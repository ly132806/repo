#include <iostream>
using namespace std;

class CPU 
{
	public:
	virtual void calculate() = 0;
};
class VideoVard
{
	public:
	virtual void display() = 0;
};
class Memory
{
	public:
	virtual void storage() = 0;
};
class IntelCpu:public CPU 
{
	public:
		void calculare()
		{
			cout << "Intel cpu is work" << endl;
		}
};
