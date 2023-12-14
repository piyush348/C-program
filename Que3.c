#include <stdio.h>
#include <conio.h>
int main()
{
    int a[1000], i, n, max, min;
    printf("Enter the size of array :");
    scanf("%d", &n);

    printf("Enter the elements in array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("Minimum of array is : %d", min);
    printf("\n Maximum of array is : %d", max);

    return 0;
}