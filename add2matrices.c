// find sum of two matrices size 2x2
#include <stdio.h>
// function main
int main()
{
    float a[2][2], b[2][2], result[2][2];
    // matrix a
    printf("enter element of 1st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    // matrix b
    printf("enter element of 2nd matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    // add corresponding elements of two arrays
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    // display result
    printf("\nsum of matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.1f\t", result[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}