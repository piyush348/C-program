#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("Enter the number before swapping First number=%d\nSecond number=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Enter the number after swapping First number=%d\nSecond number=%d\n", a, b);
    return 0;
}