#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    printf("enter the number:");
    scanf("%d",&n);
    x=sqrt(n);
    if (x*x==n)
    {
        printf("%d is a perfect square",n);
    }
    else
    {
        printf("%d is not a perfect square",n);
    }
}
