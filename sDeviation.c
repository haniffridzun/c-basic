// standard deviaion of a population
#include <math.h>
#include <stdio.h>
// function prototype
float calculateSD(float data[]);
// function main
int main()
{
    int i;
    float data[10];
    // get data from user
    printf("enter 10 elements: \n");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    // print standard deviation
    printf("\nstandard deviation = %.6f", calculateSD(data));
    return 0;
}
// function definition
float calculateSD(float data[])
{
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i)
    {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
    {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}