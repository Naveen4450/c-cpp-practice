#include<iostream>
#include<conio.h>
void main( )
{
 int a=10;
 int &b=a;
 int &c=b;
 cout<<”value of a ,b and c is”<<endl;
 cout<<a <<ends<<b<<ends<<c<<endl;
 b=20;
 cout<<a <<ends<<b<<ends<<c<<endl;
 c=24;
 cout<<a <<ends<<b<<ends<<c<<endl;
 cout<<”Address of a ,b and c is \n”;
cout<<a <<ends<<b<<ends<<c<<endl;
}
