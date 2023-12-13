#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], sum[5], i;
    printf("Enter first array : \n");
    for (i = 0; i <= 5; i++)
    {
        printf("arr1[%d]=", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter second array : \n");
    for (i = 0; i <= 5; i++)
    {
        printf("arr2[%d]=", i);
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    printf("Sum of array :");
    for (i = 0; i < 5; i++)
    {
        printf("\nsum[%d]=%d", i, sum[i]);
    }
    return 0;
}