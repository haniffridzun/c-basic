#include <stdio.h>
// function prototype
void displayNum(int num[2][2]);
// function main
int main()
{
    int num[2][2];
    printf("enter 4 number:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    // pass 2-d array to function
    displayNum(num);
    return 0;
}
// function definition
void displayNum(int num[2][2])
{
    printf("displaying:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", num[i][j]);
        }
    }
}