#include <stdio.h>
#include <math.h>

void check_armstrong(int num) {

    int cubeSum = 0;
    int origin = num;
    
    while (num > 0) {
        cubeSum += pow((num % 10), 3);
        num /= 10;
    }
    if (cubeSum == origin) {
        printf("%d is a armstrong number\n", origin);
    }

    else {
        printf("%d is not a armstrong number\n", origin);
    }

}

void check_perfectNum(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number\n", num);
    }

    else {
        printf("%d is not a perfect number\n", num);
    } 
}

int main() {

    int num;
    int mode;
    

    printf("Type 1 to check armstrong number, Type 2 to check perfect number: ");
    scanf("%d", &mode);

    printf("Input the number you want to check: ");
    scanf("%d", &num);

    if (mode) {
        check_armstrong(num);
    }

    else {
        check_perfectNum(num);
    }
    
    




    return 0;
}