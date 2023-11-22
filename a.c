#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if (i + j == 3 || j - i == 3 || i == 2 && j == 3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}