/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include"stdio.h"
int main() {
	int arr[100], element, n, i, loc;

	printf("\n Enter no. of elements: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n Enter the element to be inserted: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &element);

	printf("\n Enter the location: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &loc);

	for (i = n; i >= loc; i--) {
		arr[i] = arr[i - 1];
	}
	n++;
	arr[loc - 1] = element;

	for (i = 0; i < n; i++)
		printf("\n %d", arr[i]);

	return 0;

}
