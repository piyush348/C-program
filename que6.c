#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    int count = 0;
    printf("Enter the value of n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
    {
        printf("Is prime number");
    }
    else
    {
        printf("Not a primr number");
    }
    return 0;
}