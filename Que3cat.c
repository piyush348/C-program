//    char str1[] = "Hello, ";
//  char str2[] = "World!";
// strcat(str1, str2);
// printf("The concatenated string is: %s", str1);
// return 0;
#include <stdio.h>

/* Function Prototype*/
void mystrcat(char str1[40], char str2[40]);

/* Main Function */
int main()
{
    char str1[50], str2[50];
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    mystrcat(str1, str2);
    printf("Concatenated string is: %s", str1);

    return 0;
}

void mystrcat(char str1[40], char str2[40])
{
    int i, len = 0;
    /* Calculating length of first string */
    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }
    /* Concatenating second string to first string */
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[len + i] = str2[i];
    }
    str1[len + i] = '\0';
}
