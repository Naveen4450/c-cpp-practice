#include<stdio.h>
int main()
{
	int i,n,mul=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
	printf("%d*%d=%d\n",n,i,mul);
	}
}




