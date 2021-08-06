#include <stdio.h>

// function prototype
int sum(int n);

// function main
int main() {
	int number, result;

	printf("enter a positive integer: ");
	scanf("%d", &number);

	result = sum(number);

	printf("\nsum = %d", result);
	return 0;
}

// function definition :: sum
int sum(int n) {
	if (n != 0) {
		// sum function calls itself
		printf("\n%d", n + sum(n - 1));
		return n + sum(n - 1);
	}
	else {
		printf("\n%d", n);
		return n;
	}
}