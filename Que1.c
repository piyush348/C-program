#include <stdio.h>
#include <conio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping first number is %d and 2nd number is %d", a, b);
}

int main(void)
{
    int first, second;
    printf("Enter the first value:");
    scanf("%d", &first);
    printf("Enter the second value:");
    scanf("%d", &second);

    swap(first, second);

    printf("\n After swap function is called 1st number is %d and 2nd number is %d", first, second);

    return 0;
}