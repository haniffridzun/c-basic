#include <stdio.h>
int main()
{
	int i;
	double number, sum = 0.0;

	for (int i = 0; i <= 10; ++i)
	{
		printf("enter n%d: ", i);
		scanf("%lf", &number);

		//if user enters a negative number, break the loop
		if (number < 0.0)
		{
			break;
		}

		sum += number;
	}
	printf("sum = %.2lf", sum);
	return 0;
}