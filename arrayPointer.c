#include <stdio.h>
int main()
{
    int i, x[6], sum = 0;
    printf("enter 6 numbers:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", x + i); // x + i == &x[i]
        sum += *(x + i);    // *(x+i) == x[i]
    }
    printf("sum = %d", sum);
    return 0;
}