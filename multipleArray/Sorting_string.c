#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char alphbet[10][10], temp[10];
    int stringLen, flag;
    int i, j, m, n, k, c;

    srand(time(NULL));
    for (n = 0; n < 10; n++) {

        stringLen = rand() % 5 + 5;
        for (k = 0; k < stringLen; k++) {
            alphbet[n][k] = rand() % 26 + 'A';
        }
        alphbet[n][k] = '\0'; // 使前面連續字元變成陣列
    }

    for (m = 0; m < 10; m++) {
        printf("%s\n", alphbet[m]);
    }

    do {

        i = 0;
        for (j = 0; j < 9; j++) {

            flag = 0;

            // 比較陣列中的字元
            for (c = 0; alphbet[j][c] != '\0' && alphbet[j + 1][c] != '\0'; c++) {
                if (alphbet[j][c] == alphbet[j + 1][c]) {
                    continue;
                }
                if (alphbet[j][c] > alphbet[j + 1][c]) {
                    flag = 1;
                }
                break;
            }
            // 問老師
            if (flag == 0 && alphbet[j + 1][c] == '\0') {
                flag = 1;
            }

            // 排序字元
            if (flag == 1) {
                for (k = 0; k < 10; k++) {

                    temp[k] = alphbet[j][k];
                    alphbet[j][k] = alphbet[j + 1][k];
                    alphbet[j + 1][k] = temp[k];
                }

                i = 1;                
            }
        }

    } while (i == 1);
    printf("-----------------\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%s\n", alphbet[i]);
    }


    return 0;
}