/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: kamal
 */

#include "stdio.h"
#include "string.h"

void main()
{
	char text[20];
	int x,y,z;

	printf("x : ");
	gets(text);
	x = atoi(text);

	printf("y : ");
	gets(text);
	y = atoi(text);

	z = x+y;
	printf("x+y = %d\r\n",z);
}
