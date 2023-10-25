#include <stdio.h>
#include <conio.h>
int main()
{

    int m1, m2, m3, m4, Avg;
    printf("Enter the marks of the students:\n");
    scanf("%d%d%d%d", &m1, &m2, &m3, &m4);
    Avg = (m1 + m2 + m3 + m4) / 4;
    printf("Avg=%d", Avg);
    if (Avg < 50)
    {
        printf("\nStudent Is Fail");
    }
    else
    {
        printf("\nStudent is pass");
    }
    return 0;
}