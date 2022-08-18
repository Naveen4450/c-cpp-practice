
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d," , t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
    return 0;
}
