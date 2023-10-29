#include <stdio.h>

#include <math.h>
int main()
{
    float a, b, c, s, Area;
    printf("Enter a :");
    scanf("%f", &a);
    printf("Enter b :");
    scanf("%f", &b);
    printf("Enter c :");
    scanf("%f", &c);
    s = a + b + c / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle=%.2f", Area);
    return 0;
}