#include<stdio.h>
main()
{
	int a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],k[20],j[20],i,n,z[20];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&z[i]);
		}
	printf("the array elements you entered are:\n");
	for(i=0;i<n;i++)	
	{
		printf("%d\n",z[i]);
		}
	printf("\n");	
	//radix sort
	int a1=0;
	for(i=0;i<n;i++)
	{
		if(z[i]%10==0 )
		{
			a[a1]=z[i];
			a1++;
			}
		}	
		int b1=0;
	for(i=0;i<n;i++)
	{
		if(z[i]%10==0 )
		{
			b[b1]=z[i];
			b1++;
			}
		}		
		
}
