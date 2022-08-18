//virtual base class
#include<iostream>
using namespace std;
class A
{
	public:
	virtual void cse()
	{
		cout<<"it is base class";
		}
};
class B:A
{
	public:
	void cse()
	{
		cout<<"It is derived class";
		}
};
int main()
{
	A *p;
	B c;
	p=&c;
	p->cse();
}
