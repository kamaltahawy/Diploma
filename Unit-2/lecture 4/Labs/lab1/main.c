/*
 * main.c
 *
 *  Created on: Dec 10, 2023
 *      Author: kamal
 */

//Store and Print 10 Students Degrees
#include "stdio.h"
int main()
{
	int x;
	float degrees[10];

	for(x=0;x<=9;x++)
	{
		printf("Enter student %d degree: ",x+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&degrees[x]);
	}
	for(x=0;x<=9;x++)
	{
		printf("\n Student %d degree is %f ",x+1,degrees[x]);
	}
	return 0;
}

