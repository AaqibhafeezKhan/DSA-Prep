#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int max = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Largest element is: " << max << endl;
    return 0;
}
