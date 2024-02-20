#include <stdio.h>
#include <conio.h>
int main()
{
    char string[] = "This is a book";
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] != ' ')
        {
            count++;
        }
        printf("The total character in string: %d", count);

        return 0;
    }
}