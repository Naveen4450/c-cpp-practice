//sorting of intefers
#include<iostream>
using namespace std;
main()
{
	int n,i,j,a[100];
	cout << "enter the no of integers\n";
	cin>> n;
	cout << "enter the numbers\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		}
	cout << "the numbers you entered are\n";	
	for(i=0;i<n;i++)
	{
		cout << a[i] << "\n";
		}		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int t;
				t=a[j];
				a[j]=a[i];
				a[i]=t;
				}
			}
		}
	cout<< "the numbers after sorting\n";	
	for(i=0;i<n;i++)
	{
		cout << a[i]<< "\n";
		}		
	
}
