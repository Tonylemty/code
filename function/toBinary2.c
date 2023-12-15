#include <stdio.h>

char *toBinary(int dec, char *result) {

    int j = 0;
    while (dec) {
        result[j] = (dec % 2) + '0'; // 將數字轉換成字元 e.g. 1 -> '1'
        j++;
        dec /= 2;
    }

    result[j] = '\0'; // 將result陣列變為字串
    j -= 1;
    
    

    int i = 0;
    while (i < j) { // 反轉陣列
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
        i++;
        j--;
    }
    return result;

}

int main() {

    char decimal[1000];

    for (int i = 1; i < 10; i++) {
        printf("Decimal: %d, Binary: %s\n", i, toBinary(i, decimal));
    }



    return 0;
}