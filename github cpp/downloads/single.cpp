#include<iostream>
using namespace std;
class a
{
	public:
		int m,n;
};
class b:public a
{
	public:
	int sum(int,int);
};
int b::sum(int m,int n)
{
	cout<<"the sum of m and n is "<<m+n;
}
main()
{
	b c;
	c.sum(10,20);
}
