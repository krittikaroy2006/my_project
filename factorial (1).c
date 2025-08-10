#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number = 5;
    if (number < 0) {
        printf("Factorial does not exist for negative numbers\n");
    } else {
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }
    return 0;
}
