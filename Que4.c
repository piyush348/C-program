#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], search, i, number;
    printf("Enter the number of elements in an array\n");
    scanf("%d", &number);
    printf("Enter %d numbers\n", number);
    for (i = 0; i < number; i++)
        scanf("%d", &a[i]);
    printf("Enter the number to search\n");
    scanf("%d", &search);
    for (i = 0; i < number; i++)
    {
        if (a[i] == search)
        {
            printf("%d is present at location %d.\n", search, i + 1);
            break;
        }
    }
    if (i == number)
        printf("%d is not present in array.\n", search);
    return 0;
}