#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("enter the size: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("address of previously allocated memory:\n");
    for (i = 0; i < n1; i++)
    {
        printf("%pc\n", ptr + i);
    }

    printf("\nenter the new size: ");
    scanf("%d", &n2);

    // reallocating memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("addresses of newly allocated memory:\n");
    for (i = 0; i < n2; i++)
    {
        printf("%pc\n", ptr + i);
    }

    free(ptr);
    return 0;
}