#include<iostream>
using namespace std;
class one{
	public:
		int x,y;
	one(){}
	one(int j,int k)
	{
		x=j;
		y=k;
		}
	one operator +(one D)
	{
		one T;
		T.x=x+D.x;
		T.y=y+D.y;
		return T;
		}
	void show()
	{
		cout<<"x="<<x<<"y="<<y;
				}
	
};
one operator - (one C)
	{
		C.x=-C.x;
		C.y=-C.y;
		return C;
		}
main()
{
	one A(2,3),B(5,2),C,D;
	A.show();
	B.show();
	C=A+B;
	C.show();
	D=-C;
	D.show();
}
