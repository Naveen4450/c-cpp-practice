//factorial using recursion
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
				}
	else
	{
	 return n*fact(n-1);
		}
}
int main()
{
	int n,fac;
	cout<<"enter the n value";
	cin>>n;
	fac=fact(n);
	cout<<"the factorial of n is"<<fac;
}
