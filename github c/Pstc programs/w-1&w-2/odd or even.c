#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("given number %d is even",a);
    }
    else
    {
        printf("given number %d is odd",a);
    }
}
