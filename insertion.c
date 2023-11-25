#include <stdio.h>
#include <conio.h>
int main()
{
    int a[50], i, size, pos, num;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Over flow condition");
    }
    else
    {
        printf("Enter the elements of array:");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
    }

    printf("Enter data you want to insert :");
    scanf("%d", &num);

    printf("Enter the position :");
    scanf("%d", &pos);

    for (i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;

    printf("New Elements in the array are:");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}