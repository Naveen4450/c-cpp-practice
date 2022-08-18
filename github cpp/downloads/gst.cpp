#include<iostream>
using namespace std;
//gst
int main()
{
	int soap=60,bread=30,bucket=25;
	int a,b,c;
	cout<<"enter the quantitys:\n1.soap\n2.bread\n3.bucket\n";
	cin>>a>>b>>c;
	int d,e,f;//stores gst
	d=(soap*0.1*a);
	e=(bread*0.1*b);
	f=(bucket*0.1*c);
	int x,y,z,total;
	x=(a*soap)+d;
	y=(b*bread)+e;
	z=(c*bucket)+f;
	total=x+y+z;
	cout<<"item"<<ends<<"cost"<<ends<<"quantity"<<ends<<"total"<<endl;
	cout<<"soap"<<ends<<soap<<ends<<a<<ends<<x<<endl;
	cout<<"bread"<<ends<<bread<<ends<<b<<ends<<y<<endl;
	cout<<"bucket"<<ends<<bucket<<ends<<c<<ends<<z<<endl;
	cout<<"total prize is:"<<total;
	}
