#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;

    if ((fptr = fopen("/home/hanzun/Documents/c-basic/testFile.bin", "rb")) == NULL)
    {
        printf("error!");
        exit(1);
    }
    // moves cursor to end of file
    fseek(fptr, -sizeof(struct threeNum), SEEK_END);

    for (n = 0; n < 5; n++)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
        fseek(fptr, -2 * sizeof(struct threeNum), SEEK_CUR);
    }
    fclose(fptr);

    return 0;
}