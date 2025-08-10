// palindrome.c
#include <stdio.h>

int is_palindrome(int num) {
    if (num < 0) return 0; // negative numbers are not considered palindromes here
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int number = 121; // change this number to test other values
    if (is_palindrome(number)) {
        printf("%d is a palindrome\n", number);
    } else {
        printf("%d is not a palindrome\n", number);
    }
    return 0;
}
