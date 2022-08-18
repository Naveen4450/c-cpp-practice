//default arguments
#include<iostream>
using namespace std;
int de(int p,int t=4,float r=0.3)
{
	float si;
	si=(p*t*r)/100;
	cout<<"the simple intrest is:"<<si;
}
int main()
{
	int p,t,r;
	cout<<"enter the p t r values";
	cin>>p>>t>>r;
	de(p,t);
	
}
