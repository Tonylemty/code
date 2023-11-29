#include <stdio.h>
#include <math.h>


int main() {

    int magicSquare[100][100];
    int size, row, column, squareNumber;

    scanf("%d", &size);

    row = 0;
    column = size / 2;
    squareNumber = 1;

    while (1) {

        magicSquare[row][column] = squareNumber; // 賦予該陣列位置值
        squareNumber++;

        if (squareNumber > pow(size, 2)) { // 停止迴圈
            break;
        }

        if (magicSquare[(row - 1 + size) % size][(column + 1) % size] != 0) { // 確認位置是否有被賦於值

            row = (row + 1) % size; // 位置往下移一格
        }

        else {
            row = (row - 1 + size) % size;
            column = (column + 1) % size; 
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", magicSquare[i][j]);
        }
        printf("\n");
    }

    return 0;
}