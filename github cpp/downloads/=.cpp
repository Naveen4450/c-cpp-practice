#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			a=0;
			b=0;
			}
		A(int j,int k)
		{
			a=j;
			b=k;
			}
			void operator=(const A &m)
			{
				a=m.a;
				b=m.b;
				
				}
			void display()
			{
				cout<<"a="<<a;
				cout<<"b="<<b;
				}
};
main()
{
	A mark1(50,70);
	A mark2(90,30);
	mark1.display();
	mark2.display();
	mark1=mark2;
	mark1.display();
}
