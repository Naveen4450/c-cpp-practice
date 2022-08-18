#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a=10;
	int &b=a;
	int &c=b;
	cout<<"the values of a b and c are\n";
	cout<<&a<<ends<<&b<<ends<<&c<<endl;
	b=20;
	cout<<&a<<ends<<&b<<ends<<&c<<endl;
	c=24;
	cout<<&a<<ends<<&b<<ends<<&c<<endl;
	}
