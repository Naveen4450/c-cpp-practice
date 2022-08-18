//cut offf marks
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	cout<<"enter the no of quetons";
	int n,a;
	float w,t;
	cin>>n;
	a=1+(rand()%n);
	cout<<"the no of wrong answers is "<<a<<endl;
	w=a*0.25;
	t=n-w;
	cout<<"the total marks are"<<t;
	
}
