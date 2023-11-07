#include <stdio.h>
#include <conio.h>
int main()
{
    int one = 0, two = 1;
    int n, i, current;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        current = one + two;
        one = two;
        two = current;
        printf("%d  ", current);
    }
    return 0;
}