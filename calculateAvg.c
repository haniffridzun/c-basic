// find average of n numbers using arrays
#include <stdio.h>
int main() {
	int marks[10], i, n, sum = 0, average;
	printf("enter number of elements: ");
	scanf("%d", &n);
	// get number to store in array
	for (int i = 0; i < n; ++i) {
		printf("enter number %d: ", i+1);
		scanf("%d", &marks[i]);
		// add integeres to the sum variable
		sum += marks[i];
	}
	// calculate average
	average = sum / n;
	printf("average = %d", average);
	return 0;
}