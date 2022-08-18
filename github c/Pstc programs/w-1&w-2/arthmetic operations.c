#include <stdio.h>

int main()
{

    char operator;
    int firstNumber,secondNumber;
    printf("Enter an operator (+, -, *, /: ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%d + %d = %d",firstNumber, secondNumber, firstNumber+secondNumber);
            break;
        case '-':
            printf("%d - %d = %d",firstNumber, secondNumber, firstNumber-secondNumber);
            break;
        case '*':
            printf("%d* %d = %d",firstNumber, secondNumber, firstNumber*secondNumber);
            break;
        case '/':
            printf("%d / %d = %d",firstNumber, secondNumber, firstNumber/secondNumber);
            break;
        default:
            printf("error");

    }
}
