//roots of the quadratic equation using switch to verify with discrimenent
#include<iostream>
#include<cmath>
int pow(int,int);
using namespace std;
main()
{
	int a,b,c,d,e;
	float r1,r2;
	cout << "enter the co-efficient of x^2\n";
	cin >> a;
	cout << "enter the co-efficient of x\n";
	cin>> b;
	cout << "enter the constant term\n";
	cin>> c;
	d=((pow(b,2))-(4*a*c));
	if(d==0)
	{
		e=1;
		}
	else if(d>0)
	{
		e=2;
		}	
	else
	{
		e=3;
		}
	switch(e)
	{
		case 1:cout <<"the roots are real and equal";
		break;
		case 2:cout <<"the roots are real and unequal";
		break;
		case 3:cout <<"the roots are not real";
		break;
		}
	cout << "\nthe roots of the given quadratic equation is"; 
	r1=(-b + sqrt(d))/(2*a);
	r2=(-b - sqrt(d))/(2*a);
	cout <<r1 <<"\n";
	cout <<r2;
}
int pow(int x,int y)
{
	int i,k=1;
	for(i=0;i<y;i++)
	{
		k=k*x;
		}
	return k;	
	
}
