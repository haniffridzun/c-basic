#include <stdio.h>
int main()
{
    double first, second, temp;

    printf("enter first number: ");
    scanf("%lf", &first);

    printf("enter second number: ");
    scanf("%lf", &second);

    //value of first is assigned to temp
    temp = first;

    //value of second is assigned to first
    first = second;

    //value of temp (initial value of first) is assigned to second
    second = temp;

    printf("\nafter swapping, firstnumber = %.2lf\n", first);
    printf("after swapping, secondnumber = %.2lf", second);
    return 0;
}

// alternative: swap without using temp variable
// a = a - b;
// b = a + b;
// a = b - a;