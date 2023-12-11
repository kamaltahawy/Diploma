/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */
#include"stdio.h"
int main() {
	int n, i;
	float sum = 0.0, av;
	float num[n];
	printf("Enter the number of elements: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);

	printf("Enter %d numbers: \n", n);
	fflush(stdout);
	fflush(stdin);
	for (i = 0; i < n; i++) {
		scanf("%f", &num[i]);
		sum += num[i];
	}
	av = sum / n;

	printf("The average of the numbers is %.2f \n", av);
	return 0;

}

