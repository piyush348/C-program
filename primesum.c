#include <stdio.h>
int main()
{
    int i, j, isPrime, end, sum = 0;
    printf("Find sum of all prime number from 1 to :");
    scanf("%d", &end);
    /*find all prime numbers between 1 to end */
    for (i = 2; i <= end; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            sum += i;
        }
    }
    printf("Sum of all prime number from 1 to %d =%d", end, sum);
    return 0;
}