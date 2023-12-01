#include <stdio.h>


int main() {

    char str[100];
    char *ptr = str;

    gets(str);

    while (*ptr != '\0') {
        ptr++;
    }

    for (; ptr >= str; ptr--) {
        printf("%c", *ptr);
    }    


    return 0;
}