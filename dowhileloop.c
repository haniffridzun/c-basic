#include <stdio.h>
int main()
{
	double number, sum = 0;

	//body of loop is executed atleast once
	do {
		printf("enter a number: ");
		scanf("%lf", &number);

		sum += number;
	} while(number != 0.0);

	printf("sume = %.2lf", sum);

	return 0;
}