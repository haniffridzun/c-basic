// store temperature of two cities
#include <stdio.h>
// constanst variables
const int CITY = 2;
const int WEEK = 7;
// function main
int main()
{
    // 2-d array
    int temperature[CITY][WEEK];
    // nested loop to store values
    for (int i = 0; i < CITY; i++)
    {
        for (int j = 0; j < WEEK; j++)
        {
            printf("city %d, day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying values: \n\n");
    // nested loop to display values
    for (int i = 0; i < CITY; i++)
    {
        for (int j = 0; j < WEEK; j++)
        {
            printf("city %d, day %d = %d\n", i + 1, j + 1, temperature[i][j]);
        }
    }
    return 0;
}