#include <stdio.h>
#include <conio.h>
int main()

{
    int a, b, c;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("Before swapping numbers are First number=%d\n Second number=%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping numbers are First number=%d\n Second number=%d\n", a, b);
    return 0;
}