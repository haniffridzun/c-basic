// take 5 values from user and store them
// print elements stored in the array
#include <stdio.h>
int main() {
	int values[5];
	printf("enter 5 integers:\n");
	// take input and store it in an array
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &values[i]);
	}
	printf("\ndisplay integers:\n");
	// print elements of an array
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", values[i]);
	}
	return 0;
}