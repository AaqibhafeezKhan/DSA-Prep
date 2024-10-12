#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}
