// get error because i is declared inside 'for' loop
// exists only in 'for' loop

#include <stdio.h>

int main() {
	for (int i = 0; i < 5; ++i)
	{
		// i is a local variable to for loop only
		printf("C programming");
	}

	// error: i is not declared at this point
	printf("%d", i);

	return 0;
}