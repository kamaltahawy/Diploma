/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include"stdio.h"
int main() {
	char c[100], i;
	printf("Enter a String: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%s", c);
	for (i = 0; c[i] != '\0'; i++)
		;
	printf("Length of string: %d", i);
	return 0;
}
