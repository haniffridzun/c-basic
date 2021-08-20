// 3 function:
// -takes matrix elements
// -multiply 2 matrix
// -display result
#include <stdio.h>
// function prototype
void enterData(int firstMat[][10], int secondMat[][10], int rowFirst, int colFirst, int rowSecond, int colSecond);
void multiplyMat(int firstMat[][10], int secondMat[][10], int mult[][10], int rowFirst, int colFirst, int rowSecond, int colSecond);
void display(int mult[][10], int rowFirst, int colSecond);
// function main
int main()
{
    int firstMat[10][10], secondMat[10][10], mult[10][10], rowFirst, colFirst, rowSecond, colSecond, i, j, k;
    // get size for first mat
    printf("enter row and column for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    // get size for second mat
    printf("enter row and column for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    // if size of first mat and second not equal
    while (colFirst != rowSecond)
    {
        printf("error! column of first matrix not equal to row of second\n");
        printf("enter row and column for first matrix: ");
        scanf("%d %d", &rowFirst, &colFirst);
        printf("enter row and column for second matrix: ");
        scanf("%d %d", &rowSecond, &colSecond);
    }
    // get matrix data
    enterData(firstMat, secondMat, rowFirst, colFirst, rowSecond, colSecond);
    // multiply matrices
    multiplyMat(firstMat, secondMat, mult, rowFirst, colFirst, rowSecond, colSecond);
    // display result
    display(mult, rowFirst, colSecond);
    return 0;
}
// function definition::enterData()
void enterData(int firstMat[][10], int secondMat[][10], int rowFirst, int colFirst, int rowSecond, int colSecond)
{
    int i, j;
    printf("\nenter elements of matrix 1:\n");
    for (i = 0; i < rowFirst; i++)
    {
        for (j = 0; j < colFirst; j++)
        {
            printf("enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMat[i][j]);
        }
    }
    printf("\nenter elements of matrix 2:\n");
    for (i = 0; i < rowSecond; i++)
    {
        for (j = 0; j < colSecond; j++)
        {
            printf("enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMat[i][j]);
        }
    }
}
// function definition::multiplyMat()
void multiplyMat(int firstMat[][10], int secondMat[][10], int mult[][10], int rowFirst, int colFirst, int rowSecond, int colSecond)
{
    int i, j, k;
    // initialize elements of matrix mult to 0
    for (i = 0; i < rowFirst; i++)
    {
        for (j = 0; j < colSecond; j++)
        {
            mult[i][j] = 0;
        }
    }
    // multiply first and second matrix
    for (i = 0; i < rowFirst; i++)
    {
        for (j = 0; j < colSecond; j++)
        {
            for (k = 0; k < colFirst; k++)
            {
                mult[i][j] += firstMat[i][k] * secondMat[k][j];
            }
        }
    }
}
// function definition::display()
void display(int mult[][10], int rowFirst, int colSecond)
{
    int i, j;
    printf("\noutput matrix:\n");
    for (i = 0; i < rowFirst; i++)
    {
        for (j = 0; j < colSecond; j++)
        {
            printf("%d ", mult[i][j]);
            if (j == colSecond - 1)
                printf("\n\n");
        }
    }
}