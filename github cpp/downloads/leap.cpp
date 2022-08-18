#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the year:";
	cin>>a;
	if((a%4==0 && a%100!=0) || a%400==0)
	{
		cout<<"given year is leap year";
		}
	else
	{
		cout<<"given year is not a leap year";
		}	
}
