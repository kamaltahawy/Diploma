/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */

#include "stdio.h"
int main()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("You entered: %d\n", num);
}



