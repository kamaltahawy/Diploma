/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet.\n", ch);
    }
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }
}


