//football
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n,a[11],b[11],i,j;
	cout<<"enter the time to conduct the match"<<endl;
	cin>>n;
	int t,p=0,q=0;//p is first team and q is second team
	for(j=1;j<=11;j++)
	{
		a[j]=0;
		b[j]=0;
		}
		for(i=1;i<=n;i++)
		{
			t=1+(rand()%22);
			cout <<"the random player selected is:";
			cout<< t <<endl;
			if(t<=11)
			{
				p++;
				a[t]++;
				}
			if(t>11)
			{
				q++;
				b[t-11]++;
				}	
			}
		
	if(p>q)
	{
		cout<<"team 1 won the match with"<<p<<":"<<q<<"points difference"<<endl;;
		}	
	if(p<q)
	{
		cout<<"team 2 won the match with"<<p<<":"<<q<<"points difference"<<endl;
		}
	if(p==q)
	{
		cout<<"match tied"<<ends;
		}	

		
}
