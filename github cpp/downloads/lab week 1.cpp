//switch quadratic
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ch,a,b,c;
	float root;
	cout<<"enter the co-efficient of x^2";
	cin>>a;
	cout<<"\nenter the co-efficient of x";
	cin>>b;
	cout<<"\nenter the constant";
	cin>>c;
	root=sqrt((b*b-4*a*c)/2*a);
	cout<<"\nenter the choice\n1.root 1\n2.root 2\n";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"the first root is";
		cout<<-b+root;
		break;
		case 2:cout<<"the second root is";
		cout<<-b-root;
		break;
		default:
			cout<<"enter the valid choice";
			break;	
		}
}
