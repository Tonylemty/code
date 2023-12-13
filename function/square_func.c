#include <stdio.h>
#include <stdlib.h>

double square(double n) {
    return n * n;
}

int main() {

    double n;
    scanf("%lf", &n);
    printf("square(%lf) = %lf\n", n, square(n));
    
    

    return 0;
}
