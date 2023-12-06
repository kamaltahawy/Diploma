/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */
#include"stdio.h"
int main()

{
	char ch;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &ch);
	printf("ASCII value of '%c' = %d\n", ch, (int) ch);

}

