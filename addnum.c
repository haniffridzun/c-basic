#include <stdio.h>

// function prototype
int addNum(int a, int b);

// main function
int main() {
	int n1, n2, sum;

	printf("enters two numbers: ");
	scanf("%d %d", &n1, &n2);

	// calling function
	sum = addNum(n1, n2);
	printf("sum = %d", sum);

	return 0;
}

// function definion
int addNum(int a, int b) {
	int result;
	result = a + b;
	return result;
}