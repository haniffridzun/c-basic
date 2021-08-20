#include <stdio.h>
#include <string.h>
int main()
{
    char line[150];
    int vowels, consonant, digit, space, totalChar, length;

    vowels = consonant = digit = space = totalChar = length = 0;

    printf("enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
        {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonant;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        }
        else if (line[i] == ' ')
        {
            ++space;
        }
    }
    totalChar = vowels + consonant + digit;
    length = strlen(line);
    printf("vowels: %d", vowels);
    printf("\nconsonants: %d", consonant);
    printf("\ndigits: %d", digit);
    printf("\nwhite spaces: %d", space);
    printf("\ntotal character (exclude white space): %d", totalChar);
    printf("\ntotal character: %d", length);
    return 0;
}