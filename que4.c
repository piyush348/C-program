#include <stdio.h>
#include <conio.h>
int main()
{
    int y;
    printf("Enter the year :");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}