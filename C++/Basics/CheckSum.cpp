#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num = 1234;
    cout << "Sum of digits: " << sum_of_digits(num) << endl;
    return 0;
}
