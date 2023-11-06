#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    int fact = 1;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial=%d", fact);
    return 0;
}