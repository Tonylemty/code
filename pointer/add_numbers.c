#include <stdio.h>


int main() {

    int num1, num2;
    int *p1 = &num1, *p2 = &num2;

    scanf("%d %d", p1, p2);

    printf("The address of p1 and p2: %x, %x\n", p1, p2);
    printf("The address of num1 and num2: %x, %x\n", &num1, &num2);
    printf("%d", *p1 + *p2);



    return 0;
}