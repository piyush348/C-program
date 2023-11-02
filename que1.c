#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    char operator;
    printf("Enter any one operator :");
    scanf("%c", &operator);
    printf("Enter the value a :");
    scanf("%d", &a);
    printf("Enter the value b :");
    scanf("%d", &b);
    switch (operator)
    {
    case '+':
        c = a + b;
        printf("The sum is %d", c);
        break;
    case '-':
        c = a - b;
        printf("The difference is %d", c);
        break;
    case '*':
        c = a * b;
        printf("The product is %d", c);
        break;
    case '/':
        c = a / b;
        printf("The quotient is %d", c);
        break;

    default:
        printf("Invalid entry");
        break;
    }
}