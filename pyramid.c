#include <stdio.h>
int main(){
	int i, j, rows;
	char input, alpha = 'A';

	printf("enter number of rows and alphabet: ");
	scanf("%d %c", &rows, &input);

	// star
	for (i = 1; i <= rows; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}

	// numbers
	for (i = 1; i <= rows; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	// alphabets
	for (i = 1; i <= (input - 'A' + 1); ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%c ", alpha);
		}
		++alpha;
		printf("\n");
	}

	// inverted pyramid
	for (i = rows; i >= 1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}

	// full pyramid
	int space, k = 0;
	for (i = 1; i <= rows; ++i, k = 0)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			printf("  ");
		}
		while (k != 2 * i - 1) {
			printf("* ");
			++k;
		}
		printf("\n");
	}

	// full pyramid numbers
	int count = 0, count1 = 0;
	for (i = 1; i <= rows; ++i)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			printf("  ");
			++count;
		}
		while (k != 2 * i - 1) {
			if (count <= rows - 1)
			{
				printf("%d ", i + k);
				++count;
			} else {
				++count1;
				printf("%d ", (i + k - 2 * count1));
			}
			++k;
		}
		count1 = count = k = 0;
		printf("\n");
	}

	return 0;
}
