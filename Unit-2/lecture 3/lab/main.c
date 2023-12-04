/*
 * main.c
 *
 *  Created on: Dec 5, 2023
 *      Author: kamal
 */

#include <stdio.h>
int main()

/*{
 int i, sum=0;
 for(i=1;i<=99;i++)
 {
 sum += i;
 }
 printf("Summation of values between(1 and 99) is : %d",sum);

 }
 */
/*
 {
 int i, students;
 float degree, average, sum=0;
 printf("Enter the number of the students: ");
 fflush(stdin);
 fflush(stdout);
 scanf("%d", &students);
 for (i = 1; i <= students; i++) {
 printf("Enter student(%d) degree: ", i);
 fflush(stdin);
 fflush(stdout);
 scanf("%f", &degree);
 sum += degree;
 }
 average = sum / students;
 printf("Average students degree is: %f \r\n", average);

 }
 */
/*
 {
 int i = 1, sum = 0;
 while (i <= 99) {
 sum += i;
 i += 2;

 }
 printf("Summation of odd values between(1 and 99) is : %d", sum);
 }
 */
{
	int i = 0, j;
	for (i = 9; i >= 1; i--) //outer loop
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", j + 1);
		}
		printf(" \n");
	}

}
