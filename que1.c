#include <stdio.h>
#include <conio.h>
void main()
{
    int m1, m2, m3, m4, m5;
    float sum, percentage;
    printf("Enter the marks: \n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    sum = m1 + m2 + m3 + m4 + m5;
    printf("sum=%f \n", sum);
    percentage = (sum / 500) * 100;
    printf("percentage =%f", percentage);
    getch();
}
