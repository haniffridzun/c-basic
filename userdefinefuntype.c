#include <stdio.h>

// function prototype
void checkPrimeNum();				// no arguments passed and no return value
int getInt();						// no arguments passed but a return value
void checkPrimeAndDisplay(int n);	// argument passed but no return value
int checkPrimeInt(int n); 			// argument passed and a return value

// function main
int main() {

	// argument is not passed
	checkPrimeNum();

	int n, i, flag = 0;
	// argument is not passed
	n = getInt();
	for (i = 2; i <= n/2; ++i) {
		if (n%i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%d is not a prime number", n);
	else
		printf("%d is a prime number", n);

	int num;
	printf("\nenter a positive integer: ");
	scanf("%d", &num);
	// n is passed to the function
	checkPrimeAndDisplay(num);

	int number, sign;
	printf("\nenter a positive integer: ");
	scanf("%d", &number);
	// number is passed to checkPrimeInt()
	// returned value is assigned to sign variable
	sign = checkPrimeInt(number);
	if (flag == 1)
		printf("%d is not a prime number", number);
	else
		printf("%d is a prime number", number);

	return 0;
}

// function definition :: checkPrimeNum
// return type is void meaning doesn't return any value
void checkPrimeNum() {
	int n, i, flag = 0;

	printf("enter a positive integer: ");
	scanf("%d", &n);

	for (i = 2; i <= n/2; ++i)
	{
		if (n%i == 0)
		{
			flag = 1;
		}
	}
	if (flag == 1)
		printf("%d is not a prime number", n);
	else
		printf("%d is a prime number", n);	
}

// function definition :: getInt
// returns integer entered by user
int getInt() {
	int n;

	printf("\nenter a positive: ");
	scanf("%d", &n);

	return n;
}

// function definition :: checkPrimeAndDisplay
// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int num) {
	int i, flag = 0;

	for (i = 2; i <= num/2; ++i)
	{
		if (num%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%d is not a prime number", num);
	else
		printf("%d is a prime number", num);
}

// function definition :: checkPrimeInt
// int is retunred from the function
int checkPrimeInt(int number) {
	int i;
	for (i = 2; i <= number/2; ++i)
	{
		if (number%i == 0)
			return 1;
	}

	return 0;
}