#include <stdio.h>
#include <stdlib.h>


int main() {


    int *p = malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; i++) {
        p[i] = i + 1;
    }
    for (int j = 0; j < 10; j++) {
        printf("%d ", *(p + j));
    }



    return 0;
}