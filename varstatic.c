#include <stdio.h>

// function prototype
void display();

// function main
int main() {
	display();	// c is initialized to 1 - output: 6
	display(); 	// c is not initalized to 1 - output: 11
}

// function definition
void display() {
	static int c = 1;
	c += 5;
	printf("%d ", c);
}