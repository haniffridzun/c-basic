// calculate sum of n numbers entered by the user
#include <stdio.h>
#include <stdlib.h>
// function main
int main()
{
    int n, i, *ptr, sum = 0;
    // get num of elements
    printf("enter number of elements: ");
    scanf("%d", &n);
    // allocate memory
    ptr = (int *)malloc(n * sizeof(int));
    // if memory cannot be allocate
    if (ptr == NULL)
    {
        printf("error! memory not allocated");
        exit(0);
    }
    // get the elements
    printf("enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    // display sum
    printf("sum = %d", sum);
    // free memory
    free(ptr);
    return 0;
}