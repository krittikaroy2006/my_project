#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char text[] = "Level";
    if (is_palindrome(text)) {
        printf("\"%s\" is a palindrome\n", text);
    } else {
        printf("\"%s\" is not a palindrome\n", text);
    }
    return 0;
}
