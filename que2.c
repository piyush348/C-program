#include <stdio.h>
#include <conio.h>

int main()
{
    float P, T, I, SI;
    printf("Enter the principal: ");
    scanf("%f \n", &P);
    printf("Enter the time taken :");
    scanf("%f \n", &T);
    printf("Enter the Intrest :");
    scanf("%f \n", &I);
    SI = (P * T * I) / 100;
    printf("SI=%f", SI);
    getch();
}