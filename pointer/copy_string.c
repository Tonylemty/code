#include <stdio.h>


int main() {

    char str[100], copy[100];
    char *ori = str, *cpy = copy;

    gets(str);

    while (*ori != '\0') {
        *cpy = *ori;
        ori++;
        cpy++;
    }
    *cpy = '\0';

    puts(copy);


    return 0;
}