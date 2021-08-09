#include <stdio.h>

// function prototype
void display();

// global variable
int n = 5;

// function main
int main() {
	++n;
	display();
	return 0;
}

// function definition
void display() {
	++n;
	printf("n = %d", n);
}