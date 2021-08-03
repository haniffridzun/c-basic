// fibo sequence next term is the sum of the previous two terms
// fibo sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21 ...
// f(n) = f(n-1) + f(n-2)

#include <stdio.h>
int main() {
	int i, n;
	int f1 = 0, f2 = 1;	// initialize 1st and 2nd fibo num
	int fN = f1 + f2;	// initialize next fibo num

	// get number of terms from user
	printf("enter number of terms: ");
	scanf("%d", &n);

	// print the first two terms
	printf("fibonacci series: %d, %d, ", f1, f2);

	// print nth terms
	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", fN);
		f1 = f2;
		f2 = fN;
		fN = f1 + f2;
	}

	return 0;
}