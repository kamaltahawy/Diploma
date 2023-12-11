/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include"stdio.h"
#include"string.h"
int main() {
	char c[100], temp;
	int i, j = 0;
	printf("\n Enter a String: ");
	fflush(stdout);
	fflush(stdin);
	gets(c);

	i = 0;
	j = strlen(c) - 1;

	while (i < j) {
		temp = c[i];
		c[i] = c[j];
		c[j] = temp;
		i++;
		j--;
	}
	printf("\n Reverse string is: %s", c);
	return 0;
}

