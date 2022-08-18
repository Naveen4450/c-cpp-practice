#include<iostream>
using namespace std;
int a=5;//scope access
void cbv(int a,int b)
{
	cout<<"the sum of a and b in cby are"<<a+b<<endl;
} 
void cba(int *a,int *b)
{
	cout<<"the sum of and b in cba are"<<*a+*b<<endl;
}
void cbr(int &a,int &b)
{
	cout<<"the sum of a and b in cbr are"<<a+b<<endl;
}
int main()
{
	int a,b;
	cout<<"enter a value:";
	cin>>a;
	cout<<"enter b value:";
	cin>>b;
	cout<<"the value of local variable a is"<<a<<endl;
	cout<<"the value of global variable a is"<<::a<<endl;
	cbv(a,b);
	cba(&a,&b);
	cbr(a,b);
}
