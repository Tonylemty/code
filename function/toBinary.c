#include <stdio.h>

int toBinary(int decimal) {

    int binary = 0, base = 1;

    while (decimal > 0) {

        binary = binary + (decimal % 2) * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    return binary;
}

int main() {

    int decimal;
    scanf("%d", &decimal);
    printf("Binary: %d", toBinary(decimal));



    return 0;
}