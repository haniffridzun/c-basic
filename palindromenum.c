// integer is a palindrome if the reverse 
// of that number is equal to original

#include <stdio.h>
int main() {
	int n, reversed = 0, remainder, original;

	printf("enter an integer: ");
	scanf("%d", &n);
	original = n;

	// reversed integer is stored in reversed variable
	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;

		printf("%d %d %d", remainder, reversed, n);
	}

	// palindrome if original and reversed are equal
	if (original == reversed)
		printf("\n%d is a palindrome", original);
	else
		printf("\n%d is not a palindrome", original);

	return 0;
}