#include <stdio.h>
#include <conio.h>
int main()
{
    char s[1000];
    int i;
    printf("Enter the string in lower case :");
    gets(s);
    printf("String in lowercase = '%s'\n", s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
    printf("String in uppercase = '%s'\n", s);
    return 0;
}