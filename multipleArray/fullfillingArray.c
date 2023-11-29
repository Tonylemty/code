#include <stdio.h>


int main() {

    int numbers[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            numbers[i][j] = (10 * i) + j + 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", numbers[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The following is the processed array\n");

    numbers[0][0] = 0; // 1不是質數
    int count = 0;

    while (1) {

        for (; count < 100; count++) { // 此迴圈用來判斷哪個位置不為0
            if (numbers[count / 10][count % 10] != 0) {
                break;
            }
        }

        if (count == 100) {
            break;
        }

        for (int num = numbers[count / 10][count % 10] * 2; num <= 100; num += numbers[count / 10][count % 10]) { // 由值的2倍開始
            numbers[(num - 1) / 10][(num - 1) % 10] = 0; // 把值變為0
        }
        count++;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", numbers[i][j]);
        }
        printf("\n");
    }



    return 0;
}