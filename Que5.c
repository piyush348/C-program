#include <stdio.h>
#include <conio.h>
int main()
{
    int a[1000], i, j, n, temp = 0;
    printf("Enter the size of array :\n");
    scanf("%d", &n);

    printf("Enter the elements of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted list in asscending order : \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}