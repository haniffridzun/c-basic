#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double *data;

    printf("enter the total number of elements: ");
    scanf("%d", &n);
    // allocate memory for n elements
    data = (double *)calloc(n, sizeof(double));
    if (data == NULL)
    {
        printf("error! memory not allocated");
        exit(0);
    }
    // store numbers entered
    for (int i = 0; i < n; ++i)
    {
        printf("enter number%d: ", i + 1);
        scanf("%lf", data + i);
    }
    // find largest number
    for (int i = 1; i < n; ++i)
    {
        if (*data < *(data + i))
        {
            *data = *(data + i);
        }
    }
    printf("largest number = %.2lf", *data);
    free(data);
    return 0;
}