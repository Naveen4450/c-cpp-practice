#include<iostream>
using namespace std;
int l=25,b=25;
class raj
{
	public:
		raj()
		{
			char a[l][b];
			}
		int bod(char a[][],int l,int b);
		int fruit(int l,int b);
	
};
int raj::bod(char a[l][b],int l,int b)
    {
      	int i,j;
    	for(i=0;i<=l;i++)
     	{
		for(j=0;j<=b;j++)
		{
			if(i==0||j==0||i==l||j==b)
			{
				a[i][j]="* ";
				}
			else
			{
				a[i][j]=" ";
				}
			}
			cout<<"\n";
	    	}
	    for(i=0;i<l;i++)
	    {
			for(j=0;j<n;j++)
			{
				cout<<a[i][j];
				}
				cout<<"\n";
			}

        }
raj::int fruit(int l,int b)
{
	rand=(l*b)
	
}
 main()
{
	cout<<"hi ra ap"<<endl;
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	raj s;
	
	s.bod();
}
