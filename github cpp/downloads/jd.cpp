#include<stdio.h>
int a=20,b=20;
int h[a][b];
int bor(int a,int b);
int tar(int c, int d);
main()
{
	bor(a,b);
	tar(c,d);
	

}
int bor(int a,int b)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i==0 || j==0||j==b-1 || i==a-1 )
			{
				printf("* ");
				}
			else
			{
				printf("  ");
				}	
			}
		printf("\n");	
		}
		return 0;
	
}
int tar(int c,int d)
{
	c=rand()%a;
	d=rand()%b;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			h[a][b]='0'
			
			}
		}
		return 0;
