// calculate sum of array elements using function
#include <stdio.h>
// function prototype
float calculateSum(float num[]);
// function main
int main()
{
    float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};
    // num array is passed to calculateSum()
    result = calculateSum(num);
    printf("result = %.2f", result);
    return 0;
}
// function definition
float calculateSum(float num[])
{
    float sum = 0.0;
    for (int i = 0; i < 6; i++)
    {
        sum += num[i];
    }
    return sum;
}