//quicksort
#include<stdio.h>
int quick(int a[],int l,int h)
{
	int p,i,j,temp;
	if(l<h){
	p=l;
	i=l;
	j=h;
	while(i<j)
	{
		while(a[i]<=a[p]&&i<h)
			i++;
		while(a[j]>a[p])
			j--;
		if(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
		temp=a[p];
		a[p]=a[j];
		a[j]=temp;
		quick(a,l,j-1);
		quick(a,j+1,h);
	}
}
int main()
{
	int n,i,h,l,a[100];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		}
}
