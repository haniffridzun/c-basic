// pascal's triangle
#include <stdio.h>
int main() {
	int rows, coef = 1, space, i, j;

	printf("enter the number of rows: ");
	scanf("%d", &rows);

	for (i = 0; i < rows; ++i)
	{
		for (space = 1; space <= rows - i; space++)
			printf(" ");
		for (j = 0; j <= i; ++j)
		{
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;
			printf("%4d", coef);
		}
		printf("\n");
	}
	return 0;
}

/*
// floyd's triangle

#include <stdio.h>
int main(){
	int rows, i, j, num = 1;

	printf("enter number of rows: ");
	scanf("%d", &rows);

	for(i = 1; i <= rows; i++) {
		for(j = 1; j <= i; ++j) {
			printf("%d ", num);
			++num;
		}
		printf("\n");
	}
	return 0;
}

*/