#include <stdio.h>
#include <conio.h>
int main()
{
    int a[50], pos, size, i;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    printf("Enter the elements :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("From which position you want to delete the element:");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size)
    {
        printf("Invalid position");
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
    }
    printf("The updated elements are :");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}