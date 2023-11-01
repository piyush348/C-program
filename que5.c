#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter the age of a person :");
    scanf("%d", &age);
    if (age >= 0 && age <= 15)
    {
        printf("Working hour is 0");
    }
    else
    {
        if (age >= 16 && age <= 20)
        {
            printf("Working hour is 3");
        }
        else
        {
            if (age >= 21 && age <= 25)
            {
                printf("Working hour is 6");
            }
            else
            {
                printf("Working hour is 8");
            }
        }
    }
    return 0;
}