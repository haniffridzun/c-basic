// prime num is positive integer that divisible only by 1 and itself.

#include <stdio.h>
int main()
{
	int n, i, flag = 0;

	printf("enter a positive integer: ");
	scanf("%d", &n);

	for (i = 2; i <= n/2; ++i)
	{
		//condition for non-prime
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (n == 1)
	{
		printf("1 is neither prime nor composite");
	} else {
		if(flag == 0)
			printf("%d is a prime number", n);
		else
			printf("%d is not a prime number", n);
	}

	return 0;
}