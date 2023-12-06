/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */

#include <stdio.h>

int main() {
	int rows = 9;
	for (int i = rows; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}

