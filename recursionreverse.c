#include <stdio.h>

// function prototype
void reverseSentence();

// function main
int main() {
	printf("enter a sentence: ");
	reverseSentence();
	return 0;
}

// function definition
void reverseSentence() {
	char c;
	scanf("%c", &c);
	if (c != '\n') {
		reverseSentence();
		printf("%c", c);
	}
}