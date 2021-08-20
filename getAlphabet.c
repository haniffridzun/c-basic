// remove string except alphabets
#include <stdio.h>
int main()
{
    char line[150];

    printf("enter a string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0, j; line[i] != '\0'; ++i)
    {
        // enter the loop if char is not an alphabet
        // and not the null character
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; ++j)
            {
                // if j-th element of line is not an alphabet
                // assign value of (j+1)-th element to the j-th element
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("output string: ");
    puts(line);
    return 0;
}