#include <iostream>
using namespace std;


class MyInter{
public:
friend ostream& operator<<(ostream& cout,MyInter p1);
	MyInter(){
		m_Num = 0;
	}

	MyInter& operator++(){
		this->m_Num++;
		return *this;
	}
	MyInter operator++(int){
		MyInter nump;
		//nump.m_Num = this->m_Num;
		nump = *this;
		this->m_Num++;
		return nump;
	}
	private:
	int m_Num;
};

ostream& operator<<(ostream& cout,MyInter p1){
	cout << p1.m_Num;
	
	return cout;
}

void test(){
	MyInter myint;
	cout << ++myint << endl;
	 ++myint;
	cout << myint << endl;
	cout << ++myint << endl;
	myint++;	
	cout << myint++ << endl;


}

int main(){
	test();
	return 0;
}
