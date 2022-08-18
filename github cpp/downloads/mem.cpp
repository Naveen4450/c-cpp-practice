#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int;
	*p=5;
	cout<<"p="<<*p;
	delete(p);
	cout<<"p="<<*p;
}
