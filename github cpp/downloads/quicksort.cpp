//quick sort
#include<stdio.h>
int quicksort(int a[],int n)
{
	int p,i=0,j,c=0,temp;
	p=a[0],j=a[n],i=a[0];
	j=n;
	
	if(p<=a[i])
	{
		i++;
		}
	if(p>=a[j])
	{
		j--;	
		}
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	if(i>=j)
	{
		temp=p;
		p=a[j];
		a[j]=temp;
		}

	quicksort( a, n);
}
int main()
{
	int i,n,a[50];
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
}
