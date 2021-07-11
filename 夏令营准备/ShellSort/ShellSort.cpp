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
    for(int gap = len >> 1; gap > 0; gap /= 2){
        for (int i = gap; i < len; i++) {
            for (int j = i; j > gap - 1; j -= gap){
                if (arr[j] < arr[j - gap]) swap(arr , j, j - gap);
            }
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
