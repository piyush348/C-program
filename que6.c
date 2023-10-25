#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible to vote ");
    }
    else
    {
        printf("Not eligible to vote");
    }
    return 0;
}