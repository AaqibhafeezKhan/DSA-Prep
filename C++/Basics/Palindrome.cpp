#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "radar";
    if (is_palindrome(str))
        cout << str << " is a palindrome" << endl;
    else
        cout << str << " is not a palindrome" << endl;
    return 0;
}
