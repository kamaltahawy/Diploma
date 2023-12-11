/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include"stdio.h"
int main() {
	int arr[100], element, n, i;

	printf("\n Enter no. of elements: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);

	printf("\n Enter the values: ");
	fflush(stdout);
	fflush(stdin);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\n Enter the element to be searched: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &element);

	i = 0;
	while (i < n && element != arr[i]) {
		i++;
	}
	if (i < n) {
		printf("Number found at location = %d", i + 1);
	} else {
		printf("Number not found");
	}

return 0;

}

