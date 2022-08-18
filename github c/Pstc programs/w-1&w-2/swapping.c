#include <stdio.h>
int main()
{
    printf("with taking variable\n");
    char t;
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before swappping a=%d,b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("after swapping a=%d,b=%d",a,b);
    printf("without taking variable\n");
    int m,n;
    printf("enter two numbers:");
    scanf("%d %d",&m,&n);
    printf("before swappping a=%d,b=%d\n",m,n);
    m = m + n;
    n = m - n;
    m = m - n;
    printf("after swappping a=%d,b=%d\n",m,n);

}
