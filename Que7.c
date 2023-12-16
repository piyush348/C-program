#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, n, sum = 0;
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum = sum + a[i];
    }
    printf("The sum of even number is = %d  ", sum);

    /* printf("Enter 5 elements of the array : \n");
     for (i = 0; i <= 5; i++)
         scanf("%d", a[i]);
     for (i = 0; i < 5; i++)
     {
         if (a[i] % 2 == 0)
             sum = sum + a[i];
     }
     printf("Sum of all even numbers are : %d", sum);*/

    return 0;
}