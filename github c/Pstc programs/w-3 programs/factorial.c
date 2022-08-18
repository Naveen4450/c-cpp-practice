#include <stdio.h>
void factorial()
{
    int n, i;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    i=1;
    printf("factorial of %d:",n);
    if (n>0)
    {
        while(i<=n)
        {
            factorial=factorial*i;
            i=i+1;
        }
        printf("%d",factorial);
    }
}

