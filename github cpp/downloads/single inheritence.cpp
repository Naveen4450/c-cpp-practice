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
int b::sum(m,n)
{
	cout<<"the sum of m and n is"<<m+n;
}
main()
{
	b a;
	sum(10,20);
}
