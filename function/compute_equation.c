#include <stdio.h>

int compute(int *num, char *func) {

    while (func[*num] == ' ' || func[*num] == '(' || func[*num] == ')' || func[*num] == ',') {
        (*num)++;
    }

    if (func[*num] == 'F') {
        (*num)++;
        return compute(num, func) * 3 + 1; // 呼叫自身, 最後將count值代入
    }

    else if (func[*num] == 'G') {
        (*num)++;
        return (compute(num, func) * compute(num, func)) - 3; // 呼叫自身
    }

    else {
        int count = 0;
        while (func[*num] >= '0' && func[*num] <= '9') {
            count += (func[*num] - '0');
            (*num)++;
        }
        return count; // count的值 = compute(int *num, char *func)
    }
}

int main() {

    int num = 0;
    char instructions[100];
    gets(instructions);

    printf("%d", compute(&num, instructions));


    return 0;
}