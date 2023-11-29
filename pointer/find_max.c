#include <stdio.h>


int main() {

    int num1, num2;
    int *p1 = &num1, *p2 = &num2;

    scanf("%d %d", p1, p2);

    if (*p1 > *p2) {
        printf("The maximum value is %d", *p1);
    }

    else {
        printf("The maximum value is %d", *p2);
    }


    return 0;
}