#include<iostream>
using namespace std;
int hello()
{
	register int c=5;
	c++;
	cout<<c<<"\n";
}
int nonstatic()
{
	int c=5;
	c++;
	cout<<c<<"\n";
}
int main()
{
	hello();
	hello();
	nonstatic();
	nonstatic();
}
