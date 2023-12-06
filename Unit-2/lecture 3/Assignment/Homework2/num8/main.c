/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kamal
 */

#include <stdio.h>

int main() {
	char operator;
	float num1, num2, result;

	printf("Enter an operator (+, -, *, /): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &operator);

	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &num1, &num2);

	switch (operator) {
	case '+':
		result = num1 + num2;
		printf("%.2f + %.2f = %.2f", num1, num2, result);
		break;
	case '-':
		result = num1 - num2;
		printf("%.2f - %.2f = %.2f", num1, num2, result);
		break;
	case '*':
		result = num1 * num2;
		printf("%.2f * %.2f = %.2f", num1, num2, result);
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
			printf("%.2f / %.2f = %.2f", num1, num2, result);
		} else {
			printf("Error! Division by zero is not allowed.");
		}
		break;
	default:
		printf("Error! Invalid operator.");
	}

	return 0;
}

