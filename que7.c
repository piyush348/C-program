#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rem;
    int sum = 0;
    printf("Enter the value of n :");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}