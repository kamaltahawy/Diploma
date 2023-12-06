/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */
#include"stdio.h"
int main() {
	float a, b, temp;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);
}

