#include<stdio.h>

void merges(int a[],int l,int m,int h)
{
	int k,i,j;
	int n1=m-l+1;
	int n2=h-m;
	int b[n1],c[n2];
	for(i=0;i<n1;i++)
	{
		b[i]=a[l+i];
		}
	for(j=0;j<n2;j++)
	{
		c[j]=a[m+1+j];
		}
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(b[i]<=c[j])
		{
			a[k]=b[i];
			i++;
			}
		else
		{
			a[k]=c[j];
			j++;
			}
			k++;
				}
	while(i<n1)
	{
		a[k]=b[i];
		i++;
		k++;
		}
	while(j<n2)
	{
		a[k]=c[j];
		j++;
		k++;
		}
}
int merge(int a[],int l,int h)
{
	if(l<h)
	{
		int m;
		m=(l+(h-1))/2;
		merge(a,l,m);
		merge(a,m+1,h);
		merges(a,l,m,h);
		}
}
int main()
{
	int n,i,a[100];
	printf("enter the size");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge(a,0,n-1);
	printf("after sort");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
