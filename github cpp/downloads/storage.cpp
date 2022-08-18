#include<iostream>
using namespace std;
int g;
int fun()
{
	static int a;
	register int b;
	b=6;
	a=a+b*2;
	cout<<"inside test condition";
	cout<<"g="<<g;
	cout<<"a="<<a;
	cout<<"b="<<b;
}
int main()
{int a=17;
g=24;
fun();
cout<<"inside main:\n";
cout<<"a="<<a;
cout<<"g="<<g;
	
}
