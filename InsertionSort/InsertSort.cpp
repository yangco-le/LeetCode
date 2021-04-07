# include <iostream>
# include <cstdio>

using namespace std;

void swap(int* arr, int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void print(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

void sort(int* arr, int len) {
    for (int i = 1; i < len; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[j + 1]) swap(arr, j, j + 1);
        }
    }
}

int main() {
    int arr[10] = {4, 2, 6, 1, 5, 8, 0, 9, 7, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, len);
    print(arr, len);

    return 0;
}
