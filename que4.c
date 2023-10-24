#include <stdio.h>
#include <conio.h>
int main()
{
    int A, r, TC, C;
    printf("Enter the radius :");
    scanf("%d", &r);
    printf("Cost sq/m:");
    scanf("%d", &C);
    A = 2 * 22 / 7 * r;
    printf("\nA=%d", A);
    TC = 25 * A;
    printf("\nTC=%d", TC);
    return 0;
}