#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[] = "radar";
    if (is_palindrome(str))
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
    return 0;
}
