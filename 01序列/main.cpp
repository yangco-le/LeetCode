#include<bits/stdc++.h>
using namespace std;

void increase(int *arr) {
    int i = 5;
    do
    {
        arr[i] = (arr[i] + 1) % 2;
        i--;

    } while(!arr[i+1] && i != -1);
}

void print(int *arr) {
    for (int i = 0; i < 6; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[6] = {0};
    for(int i = 0; i < 64; i++) {
        print(arr);
        increase(arr);
    }
    return 0;
}
