//factorial using recursion
#include<iostream>
int fact(int);
using namespace std;
main()
{
	int x;
	cout << "enter x\n";
	cin>> x;
	cout << fact(x);
}
int fact(int a)
{
	if(a>=1)
	return a*fact(a-1);
	else
	return	1;
		
	
}
