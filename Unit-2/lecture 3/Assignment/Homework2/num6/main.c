/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */

#include <stdio.h>
int main() {
	int num, i, sum = 0;
	printf("Enter a positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);

	for (i = 1; i <= num; ++i) {
		sum += i;
	}

	printf("sum= %d\n", sum);
}

