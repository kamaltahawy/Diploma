/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include"stdio.h"
int main() {
	int r, c, i, j;
	int x[r][c];
	int t[r][c];

	printf("Enter the number of rows and columns of the matrix: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &r, &c);

	printf("Enter the elements of the matrix:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter the element(%d, %d) : ", i + 1, j + 1);
			fflush(stdout);
			fflush(stdin);
			scanf("%d", &x[i][j]);
		}
	}
	printf("The matrix is \n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d\t", x[i][j]);
		}
		printf("\r\n");
	}
	printf("The transpose matrix is \n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			t[j][i] = x[i][j];
		}
	}
	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			printf("%d\t", t[i][j]);
		}
		printf("\r\n");
	}
	return 0;
}

