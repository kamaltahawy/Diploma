#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of negative numbers is not defined.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
