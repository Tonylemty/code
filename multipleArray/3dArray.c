#include <stdio.h>


int main() {

    int three_dimensional_array[4][3][2];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                three_dimensional_array[i][j][k] = 2 * 3 * j + 2 * k + i + 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%2d ", three_dimensional_array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }





    return 0;
}