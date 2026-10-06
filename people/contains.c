#include <stdio.h>

int contains(int item, int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == item) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = { 1, 9, 2, 0, 2, 5 };
    const size_t arr_len = sizeof(arr) / sizeof(int);
    printf("Arr size is %ld\n", arr_len);
    printf("Result: %d\n", contains(5, arr, arr_len));
}
