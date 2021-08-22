// add two distance
#include <stdio.h>
// struct definition
struct Distance
{
    int feet;
    float inch;
} dist1, dist2, sum; // struct variables
// function main
int main()
{
    // first distance
    printf("1st distance\n");
    printf("enter feet: ");
    scanf("%d", &dist1.feet);
    printf("enter inch: ");
    scanf("%f", &dist1.inch);
    // second distance
    printf("\n2nd distance\n");
    printf("enter feet: ");
    scanf("%d", &dist2.feet);
    printf("enter inch: ");
    scanf("%f", &dist2.inch);
    // add feet
    sum.feet = dist1.feet + dist2.feet;
    // add inch
    sum.inch = dist1.inch + dist2.inch;
    // change to feet if inch is greate than 12
    while (sum.inch >= 12)
    {
        ++sum.feet;
        sum.inch = sum.inch - 12;
    }
    // display result
    printf("sum of distance = %d\'-%.1f\"", sum.feet, sum.inch);
    return 0;
}