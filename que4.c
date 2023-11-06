#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, odd_sum = 0, even_sum = 0;
    printf("Enter the last number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)

            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all even number =%d\n", even_sum);
    printf("Sum of all odd number =%d", odd_sum);

    return 0;
}