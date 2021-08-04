// greatest common divisor (GCD) of 2 integers is largest 
// integer that cna divide both number (without remainder)

#include <stdio.h>
int main() {
	int n1, n2, i, gcd;
	
	printf("enter two integers: ");
	scanf("%d %d", &n1, &n2);

	for (i = 1; i <= n1 && i <= n2; ++i)
	{
		// checks if i is factor of both integers
		if (n1%i == 0 && n2%i == 0)
		{
			gcd = i;
		}
	}

	printf("GCD of %d and %d is %d", n1, n2, gcd);

	return 0;
}