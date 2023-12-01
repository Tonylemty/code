#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;

    gets(str1);
    gets(str2);

    while (*p1 != '\0') {
        p1++;
    }
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';
    puts(str1);

    return 0;
}