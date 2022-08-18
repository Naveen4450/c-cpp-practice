//sort integer numbers
#include<iostream>
using namespace std;
int sort(int a[],int n)
{
	int j,k,temp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(a[j]<a[k])
			{
				temp=a[j];
				a[j]=a[k];
				a[k]=temp;
				}
			}
		}
	cout<<"the sorted array is:";
	for(j=0;j<n;j++)
	{
		cout<<a[j]<<"\n";
		}
}
int main()
{
	int n;
	cout<<"enter the no of integers";
	cin>>n;
	int a[n],i;
	cout<<"enter the integers";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		}
	cout<<"the inegers you entered are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
		}
	sort(a,n);	
}
