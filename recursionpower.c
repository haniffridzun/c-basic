#include <stdio.h>

// function prototype
int power(int n1, int n2);

// function main
int main() {
	int base, a, result;
	printf("enter base number: ");
	scanf("%d", &base);
	printf("enter power number: ");
	scanf("%d", &a);

	result = power(base, a);

	printf("%d^%d = %d", base, a, result);
	return 0;
}

// function definition
int power(int base, int a) {
	if (a != 0)
		return (base * power(base, a - 1));
	else
		return 1;
}