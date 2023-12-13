#include <stdio.h>

int check(int n) {

    return n % 2 == 0;
}


int main() {

    int n;
    scanf("%d", &n);
    printf("check(%d) = %d\n", n, check(n));



    return 0;
}