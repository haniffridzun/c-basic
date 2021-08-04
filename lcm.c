// lcm is the smallest positive integer 
// that divisible by both integers (without a remainder)

#include <stdio.h>
int main() {
	int n1, n2, max;

	printf("enter two positive integers: ");
	scanf("%d %d", &n1, &n2);

	//max number between n1 and n2 is stored in max
	max = (n1 > n2) ? n1 : n2;

	while(1) {
		if (max % n1 == 0 && max % n2 == 0)
		{
			printf("the LCM of %d and %d is %d", n1, n2, max );
			break;
		}
		++max;
	}
	return 0;
}