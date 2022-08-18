#include<iostream>
using namespace std;
//pointer
class A
{ 
	int a,b;
	public:
		A(int a,int b)
		{
			this->a=a;
			this->b=b;
			}
		void display()
		{
			cout<<"a="<<a;
			cout<<"b="<<b;
			}
	
};
int main()
{
	A *ptr=new A(10,30);
	ptr->display();
	
}
