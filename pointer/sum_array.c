#include <stdio.h>


int main() {

    int arr[5], *ptr, sum = 0;

    for (ptr = arr; ptr < arr + 5; ptr++) {

        scanf("%d", ptr);
        sum += *ptr;
    }

    for (ptr = arr; ptr < arr + 5; ptr++) {
        printf("%d ", *ptr);
    }

    printf("\n");
    printf("%d", sum);



    return 0;
}