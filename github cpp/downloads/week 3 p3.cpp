//function overloading
#include<iostream>
using namespace std;
int add(int a,int b,int c)
{
	cout<<"the addition of a b and c is:"<<a+b+c<<endl;
}
int add(int a,int b)
{
	cout<<"the addition of a b is:"<<a+b<<endl;
}
double add(double a,double b)
{
	cout<<"the addition of a and b is"<<a+b<<endl;
}
int main()
{
	add(5,3,4);
	add(3,5);
	add(3.5,5.6);
}
