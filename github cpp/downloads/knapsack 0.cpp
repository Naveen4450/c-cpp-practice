//knapsack problem
#include<stdio.h>
int main()
{
	int weight,n;
	printf("enter the weight of knapsack bag");
	scanf("%d",&weight);
	printf("\nenter no of objects");
	scanf("%d",&n);
	int p[n],w[n],i,j;
	printf("\nenter the profits\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&p[i]);
		}
	printf("enter weights\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&w[i]);
		}
	printf("the profits you enterd are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p[i]);
		}
	for(i=0;i<n;i++)
	{
		printf("%d\t",w[i]);
		}
//actual process
while(weight>0)
{
	int min,s;

		for(j=0;j<n;j++)
		{
			if((p[j]/w[j])<(p[j+1]/w[j+1]))
			{
				min=(p[j]/w[j]);
				s=j;
			}			
			else
			{
				min=(p[j+1]/w[j+1]);
				s=j+1;
			}
		}
		int a[n];
for(i=0;i<n;i++)
{
	if(i==s)
	{
		a[i]=1;
		}
		else
		{
			a[i]=0;
			}
}
	for(j=0;j<n;j++)
	{
		printf("%d\t",p[i]);
		
		}
	for(j=0;j<n;j++)
	{
		printf("%d\t",w[i]);
		}			
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[i]);
		}
}
}
