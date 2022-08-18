#include<iostream>
using namespace std;
inline int abc(int a,int b)
{
	return a+b;
}
main()
{
	int a,b;
	cin>>a>>b;
	cout<<abc(a,b);
}
