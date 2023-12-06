/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */
#include <stdio.h>
int main() {
	char ch;
	int lowercase_vowel, uppercase_vowel;
	printf("Enter a character: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c", &ch);
	lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
	uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

	if (lowercase_vowel || uppercase_vowel)
		printf("%c is a vowel.\n", ch);
	else
		printf("%c is a consonant.\n", ch);
}
