#include <stdio.h>
#include <conio.h>
int main()
{
    int color;
    printf("Enter the number from 1 to 5 :");
    scanf("%d", &color);
    switch (color)
    {
    case 1:
        printf("RED");
        break;
    case 2:
        printf("GREEN");
        break;
    case 3:
        printf("WHITE");
        break;
    case 4:
        printf("YELLOW");
        break;
    case 5:
        printf("ORANGE");
        break;

    default:
        printf("Invalid input");
        break;
    }
}