#include<iostream>
using namespace std;
enum day{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main()
{
	enum day today;
	today=tuesday;
	cout<<"today="<<today;
}
