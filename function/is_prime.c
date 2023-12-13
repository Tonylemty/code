#include <stdio.h>

int isPrime(int n) {

    if (n <= 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }

    else if (n % 2 == 0) {
        return 0;
    }

    else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int main() {

    int n;
    scanf("%d", &n);
    printf("isPrime(%d) = %d\n", n, isPrime(n));



    return 0;
}