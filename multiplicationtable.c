#include <stdio.h>
int main()
{
	int n, i, range;

	printf("enter an integer: ");
	scanf("%d", &n);

	// prompt user for positve range
	do {
		printf("enter the range (positive integer): ");
		scanf("%d", &range);
	} while (range <= 0);

	for (int i = 1; i < range; ++i)
	{
		printf("%d * %d = %d\n", i, n, n*i);
	}

	return 0;
}