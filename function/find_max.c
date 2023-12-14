#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int max(int *arr, int len) {

    int maxNum = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main() {

    srand(time(NULL));

    int len = rand() % 10 + 1; // 產生介於1-10的數
    int *arr;
    arr = malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 10 + 1;
    }

    for (int j = 0; j < len; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("Max value: %d", max(arr, len));


    return 0;
}