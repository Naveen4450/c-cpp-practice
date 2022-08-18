//bus reservation
#include<iostream>
using namespace std;
main()
{
	int i,j=1,w[16],nw[17],rs[33];
	for(i=1;i<=33;i++)
	{
		if(i%2!=0)
		{
			w[j++]=i;	
			}
		}
	for(i=1;i<=33;i++)
	{
		if(i%2==0)
		{
			nw[j++]=i;
			}
		}	
	cout<<"wellcome to the corona bus"<<endl;
	cout<<"please enter gender and seat you want\n1.window and women\n2.not a window and a women\n3.window and men \n4.not awindow and men"<<endl;
	int ch;
	while(1)
	{
		switch(ch)
		{
			case 1:cout<<"the seats in reamining in the bus is\n";
			       for(i=1;i<16;i++)
				   {
						if(i%2!=0)
						{
							cout<<w[i]<<"\t";
							}
						}			
		
				}
		}
}
