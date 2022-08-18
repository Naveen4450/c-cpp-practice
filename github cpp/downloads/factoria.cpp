//factorial
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number";
	cin>>a;
	int fact=1,i=1;
	while(i<=a)
	{
		fact=fact*i;
		i++;
		}
	cout<<fact;
}
