#include <stdio.h>
#include <conio.h>


int CheckPrime(int number)
{
    
    int i = 2;
    while (i <= number / 2)
    {
        if (number % i == 0)
            return 0;
        else
            i++;
    }
    return 1;
}
int main()
{
    int num, prime;
    printf("Enter the number :");
    scanf("%d", &num);

    prime = CheckPrime(num);

    if (prime == 1)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}