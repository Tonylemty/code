#include <stdio.h>

int main() {

    int two_dimensional_array[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            two_dimensional_array[i][j] = (i * 4) + j + 1;
        }
    }

    // Output with two layers array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", two_dimensional_array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Output with one layer array
    for (int i = 0; i < 12; i++) {
        printf("%d ", two_dimensional_array[0][i]);
    }


    return 0;
}