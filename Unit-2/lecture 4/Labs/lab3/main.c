/*
 * main.c
 *
 *  Created on: Dec 10, 2023
 *      Author: kamal
 */

//calculate and print the transpose of 3x3 matrix
#include"stdio.h"
int main() {
	float x[3][3];
	int r, c;
	float t[3][3];

	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("Enter the element(%d, %d) : ", r, c);
			fflush(stdout); fflush(stdin);
			scanf("%f", &x[r][c]);
		}
	}
	printf("The matrix is \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%2.2f\t", x[r][c]);
		}
		printf("\r\n");
	}
	printf("The transpose matrix is \n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			t[r][c] = x[c][r];
		}
	}
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%2.2f\t", t[r][c]);
		}
		printf("\r\n");
	}
	return 0;
}

