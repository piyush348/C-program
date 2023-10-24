#include <stdio.h>
#include <conio.h>
int main()
{
    float r, D, pie = 22 / 7, cir;
    printf("Enter the radius:");
    scanf("%f", &r);
    cir = 2 * pie * r;
    printf("cir=%f", cir);
    D = cir * 5;
    printf("\ndistance covered=%f", D);
    return 0;
}