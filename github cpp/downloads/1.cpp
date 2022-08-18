//virtual base class
#include<iostream>
using namespace std;
class A
{
	void virtual cse()
	{
		cout<<"it is cse function of base clss";
		}
};
class B:A
{
	void cse()
	{
		cout<<"it is cse function of derived clss";
		}
};
int main()
{
	A *p;
	B c;
	p=&c;
	p->cse();
}
