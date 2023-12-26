
// char str[] = "Hello, World!";
//   int len = strlen(str);
// printf("The length of the string is: %d", len);
// return 0;
#include <stdio.h>
#include <conio.h>
void main()
{
    int len(char *);
    char s[20];
    int l;
    printf("Enter a string: ");
    gets(s);
    l = len(s);
    printf("length of string is =%d", l);
    getch();
}

int len(char *t)
{
    int count = 0;
    while (*t != '\0')
    {
        count++;
        t++;
    }
    return (count);
}
