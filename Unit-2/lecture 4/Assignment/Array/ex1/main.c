/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include "stdio.h"
int main() {
	float x[2][2], y[2][2], z[2][2];
	int i, j;

	printf("Enter the elements of first matrix \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter x[%d][%d]: ", i + 1, j + 1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f", &x[i][j]);
		}
	}
	printf("Enter the elements of second matrix \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter y[%d][%d]: ", i + 1, j + 1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f", &y[i][j]);
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			z[i][j] = x[i][j] + y[i][j];
		}
	}
	printf("\nSum of matrix: ");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%.2f\t", z[i][j]);
			if (j == 1)
				printf("\n");
		}
	}
	return 0;

}

