//roots of quadratic equation
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	float root;
	cout<<"enter the co-efficient of x^2:";
	cin>>a;
	cout<<"\nenter the co-efficient of x:";
	cin>>b;
	cout<<"\nenter the constant";
	cin>>c;
	root=+(sqrt((b*b)-4*a*c)/2*a);
	cout<<"the roots of the quadratic equation are:";
	cout<<-b+root;
	cout<<-b-root;
}
