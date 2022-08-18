#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int m,n;
	void swap(*int,*int);
	m=10;
	n=20;
	cout<<"\nbefore swap"<<m<<"\n"<<n;
	swap(&m,&n);
	cout<<"\nafter swap"<<m<<"\n"<<n;
}

