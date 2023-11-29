#include <stdio.h>


int main() {


    char str[100];
    char *p = str;
    int len;

    gets(str);

    while (*p != '\0') {
        p++;
    }
    printf("Using while loop's answer: %d\n", p - str);
    

    for (len = 0; *(str + len) != '\0'; len++);
    printf("Using for loop's answer: %d", len);    


    return 0;
}