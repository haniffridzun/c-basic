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

    if ((fptr = fopen("/home/hanzun/Documents/c-basic/testFile.bin", "wb")) == NULL)
    {
        printf("error! opening file");
        // program exist if the file pointer returns NULL
        exit(1);
    }

    for (n = 0; n < 5; n++)
    {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);

    return 0;
}
