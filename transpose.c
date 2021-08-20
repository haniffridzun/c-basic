// tranpose of matrix is a matrix that is obtained by exchanging the rows and columns
#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], row, col;
    // get num of rows and columns
    printf("enter rows: ");
    scanf("%d", &row);
    printf("enter columns: ");
    scanf("%d", &col);
    // assign elements to the matrix
    printf("\nenter matrix elements\n");
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    // printing matrix a
    printf("\nenter matrix: \n");
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("%d ", a[i][j]);
            if (j == col - 1)
                printf("\n");
        }
    // computing transpose
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    // printing matrix t
    printf("\ntranspose of matrix:\n");
    for (int i = 0; i < col; ++i)
        for (int j = 0; j < row; ++j)
        {
            printf("%d ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }
    return 0;
}