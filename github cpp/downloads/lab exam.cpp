//virtual base class
#include<iostream>
using namespace std;
class A
{
	virtual void cse();
	{
		cout<<"it is cse function of base class";
		}
};
class B:A
{
	void cse()
	{
		cout<<"it is cse function of derived class"
		}
};
int main()
{
	A *p;
	B c;
	p=&c;
	p->cse();
}
