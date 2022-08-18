#include<stdio.h>
int main()
{
    printf("memory allocation for integer takes %d bytes\n",sizeof(int));
    printf("memory allocation for character takes %d bytes\n",sizeof(char));
    printf("memory allocation for double takes %d bytes\n",sizeof(double));
    printf("memory allocation for float takes %d bytes\n",sizeof(float));
    printf("memory allocation for void takes %d bytes\n",sizeof(void));
    printf("memory allocation for short takes %d bytes\n",sizeof(short));
    printf("memory allocation for long takes %d bytes\n",sizeof(long));
}
