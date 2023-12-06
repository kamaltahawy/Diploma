/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */
#include"stdio.h"
int main()
{
	int n1, n2, sum = 0;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &n1, &n2);
	sum = n1 + n2;
	printf("sum: %d\n", sum);
}

