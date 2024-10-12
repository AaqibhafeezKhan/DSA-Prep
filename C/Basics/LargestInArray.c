#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int max = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Largest element is: %d\n", max);
    return 0;
}
