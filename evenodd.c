#include <stdio.h>
int main()
{
	int number;

	printf("enter an integer: ");
	scanf("%d", &number);

	//if true the remainder is 0
	if (number%2 == 0)
	{
		printf("%d is an even integer.", number);
	} else {
		printf("%d is an odd integer.", number);
	}

	return 0;
}
