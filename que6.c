#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter cofficients a,b and c :");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %f", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f + %.2f and root2 =%.2f-%.2f", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}