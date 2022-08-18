#include<stdio.h>
int min(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}
main()
{
	int i,j,k,n;
	printf("enter n value");
	scanf("%d",&n);
	int b[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
			//a[i][j]=999;
			if(b[i][j]==0&&i!=j)
			{
				b[i][j]=999;
			}	
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				b[i][j]=min(b[i][j],b[i][k-1]+b[k-1][j]);
			}
		}
		printf("\nk=%d\n",k);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",b[i][j]);
				//b[i][j]=a[i][j];
				//a[i][j]=999;
			}
			printf("\n");
		}
	}	
}
