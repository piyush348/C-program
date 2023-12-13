#include <stdio.h>
#include <conio.h>
int main()
{
    int a[1000], i, n, sum = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Sum of the array is : %d", sum);
    return 0;
}