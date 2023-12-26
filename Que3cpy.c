//    char src[] = "Hello, World!";
//  char dest[20];
// strcpy(dest, src);
// printf("The copied string is: %s", dest);
// return 0;
#include <stdio.h>

/* Function prototype */
void mystrcpy(char str2[30], char str1[30]);

/* Main function */
int main()
{
    char str1[30], str2[30];

    printf("Enter string:\n");
    gets(str1);

    mystrcpy(str2, str1);

    printf("Copied string is: %s", str2);

    return 0;
}

/* Function Definition*/
void mystrcpy(char str2[30], char str1[30])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}