#include<iostream>
using namespace std;

class Pathon{
	public:

	friend	ostream& operator << (ostream& cout,Pathon &p);
		Pathon(){};
		Pathon(int a,int b):m_A(a),m_B(b){

		}
	private:
		int m_A;
		int m_B;
};
		ostream& operator << (ostream& cout,Pathon &p){
			cout << p.m_A <<  p.m_B;
			return cout;
		}
void tese(){
	Pathon p1(11,11);
	Pathon p2(22,22);
	cout << p1 << endl;
}
int main(){
	tese();
	return 0;
}
