/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */

#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3)
    {
        printf("The largest number is: %d\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("The largest number is: %d\n", n2);
    }
    else
    {
        printf("The largest number is: %d\n", n3);
    }

}



