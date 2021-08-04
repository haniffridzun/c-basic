// positive integer is armstrong num if
// abcd... = a^n + b^n + c^n + d^n +...

#include <math.h>
#include <stdio.h>

int main(){
	int low, high, num, oriNum, rem, count = 0;
	double result = 0.0;

	printf("enter two numbers (intervals): ");
	scanf("%d %d", &low, &high);
	printf("armstrong numbers between %d and %d are: ", low, high);

	// swap numbers if low > high
	if (high < low)
	{
		high += low;
		low = high - low;
		high -= low;
	}

	// iterate number from (low + 1) to (high -1)
	// in each iteration, check if number is armstrong
	for (num = low + 1; num < high; ++num)
	{
		oriNum = num;

		// num of digits calculation
		while (oriNum != 0)
		{
			oriNum /= 10;
			++count;
		}

		oriNum = num;

		// result contains sum of nth power of individual digits
		while (oriNum != 0) {
			rem = oriNum % 10;
			result += pow(rem, count);
			oriNum /= 10;
		}

		// check if number is equal to sum of nth power of individual digits
		if ((int)result == num)
		{
			printf("%d ", num);
		}

		// reset the values
		count = 0;
		result = 0;
	}
	
	return 0;
}

// int main()
// {
// 	int num, oriNum, remainder, n = 0;
// 	float result = 0.0;

// 	printf("entere an integer: ");
// 	scanf("%d", &num);

// 	oriNum = num;

// 	// store number of digits of num in n
// 	for (oriNum = num; oriNum !=0 ; ++n)
// 	{
// 		oriNum /= 10;
// 		printf("%d", oriNum);
// 	}

// 	for (oriNum = num; oriNum != 0; oriNum /= 10)
// 	{
// 		remainder = oriNum % 10;
// 		printf("%d", remainder);

// 		// store the sum of power of each digits in result
// 		result += pow(remainder, n);
// 		printf("%d", (int)result);
// 	}

// 	// if num is equal to result, num is armstrong num
// 	if ((int)result == num)
// 		printf("\n%d is armstrong number", num);
// 	else
// 		printf("\n%d is not armtrong number", num);

// 	return 0;
// }