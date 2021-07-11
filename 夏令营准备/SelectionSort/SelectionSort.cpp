# include <iostream>
# include <cstdio>
using namespace std;

void swap(int *arr, int i, int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

int main() {
    int arr[10] = {6, 3, 2, 1, 4, 5, 7, 9, 0, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len - 1; i++){
        int min_pos = i;

        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min_pos])
                min_pos = j;
        }

        swap(arr, i, min_pos);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
