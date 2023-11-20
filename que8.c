#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rem;
    int value = 0;
    printf("Enter the value :");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        value = value * 10 + rem;
        n = n / 10;
    }
    printf("Enter the value :%d", value);

    return 0;
}