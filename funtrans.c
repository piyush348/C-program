#include <stdio.h>
#include <conio.h>
void main()
{
    void getTranspose(int P[][3], int, int);
    int x[3][3], row, col;
    printf("Enter the elements :");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d", &x[row][col]);
        }
    }
    getTranspose(x, 3, 3);
}
void getTranspose(int p[][3], int r, int c)
{
    int i, j, temp = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            temp = p[j][i];
            p[j][i] = p[i][j];
            p[i][j] = temp;
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", p[i][j]);
        }
        printf("\n");
    }
}