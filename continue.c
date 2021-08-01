#include <stdio.h>
int main()
{
	double number, sum = 0.0;

	for (int i = 1; i < 10; ++i)
	{
		printf("enter a n%d: ", i);
		scanf("%lf", &number);

		if (number < 0.0)
		{
			continue;
		}

		sum += number;
	}

	printf("sum = %.2lf", sum);
	return 0;
}