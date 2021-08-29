#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("/home/hanzun/Documents/c-basic/testFile.txt", "w");

    if (fptr == NULL)
    {
        printf("error!");
        exit(1);
    }

    printf("enter num: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}