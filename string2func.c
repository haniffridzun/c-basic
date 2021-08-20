#include <stdio.h>

void displayString(char str[]);

int main()
{
    char str[50];
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str); // passing string to a function
    return 0;
}

void displayString(char str[])
{
    printf("string output: ");
    puts(str);
}