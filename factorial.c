// factorial of n: (n!) = 1*2*3 ... n

#include <stdio.h>

int main()
{
	int n, i;
	unsigned long long fact = 1; // factorial number may be very large

	printf("enter an integer: ");
	scanf("%d", &n);

	// show error if user enters negative integer
	if (n < 0)
		printf("error! factorial of negative number doesn't exists\n");
	else {
		for (i = 1; i < n; ++i)
		{
			fact *= i; // fact = fact * i
		}
		printf("factorial of %d = %llu", n, fact);
	}

	return 0;
}