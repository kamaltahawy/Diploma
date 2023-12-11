/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include"stdio.h"
int main() {
	char c[100], ch;
	int i, count = 0;
	printf("Enter a String: ");
	fflush(stdout);
	fflush(stdin);
	gets(c);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch);
	for (i = 0; c[i] != '\0'; i++) {
		if (ch == c[i])
			count++;
	}
	printf("Frequency of %c = %d", ch, count);
	return 0;
}
