#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	int lowercase_vowel, uppercase_vowel;

	printf("enter an alphabet: ");
	scanf("%c",&c);

	//evaluates to 1 if variable c is lowercase vowel
	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	//evaluates to 1 if varibale c is uppercase vowel
	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	//show error message if c is not alphabet
	if (!isalpha(c))
		printf("error! non-alphabetic character");
	else if (lowercase_vowel || uppercase_vowel)
		printf("%c is a vowel", c);
	else
		printf("%c is a consonant", c);

	return 0;
}