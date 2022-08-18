#include<iostream>
int a=4;
using namespace std;
int main()
{
	cout<<"the global variable is"<<::a;
	int *p,i;
	p=new int[3];
	for(i=0;i<3;i++)
	{
		cin>>p[i];
		}
	for(i=0;i<3;i++)
	{
		cout<<p[i];
		}
	delete(p);
}
