#include <stdio.h>

int compare_string(char *str1, char *str2) {

    int count_str1[26] = {0}, count_str2[26] = {0};
    char *ptr1 = str1, *ptr2 = str2;

    // 計算字串中，各個字母的數量
    while (*ptr1 != '\0') {

        if (*ptr1 >= 'a' && *ptr1 <= 'z') {
            count_str1[*ptr1 - 'a']++;
        }
        else if (*ptr1 >= 'A' && *ptr1 <= 'Z') {
            count_str1[*ptr1 - 'A']++;
        }
        ptr1++;
    }

    // 計算字串中，各個字母的數量
    while (*ptr2 != '\0') {
        if (*ptr2 >= 'a' && *ptr2 <= 'z') {
            count_str2[*ptr2 - 'a']++;
        }
        else if (*ptr2 >= 'A' && *ptr2 <= 'Z') {
            count_str2[*ptr2 - 'A']++;
        }
        ptr2++;
    }

    // 比對兩字串是否為字謎
    for (int i = 0; i < 26; i++) {
        if (count_str1[i] != count_str2[i]) {
            return 0;
        }
    }
    return 1;

}

int main() {

    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    if (compare_string(str1, str2)) {
        printf("Strng1 and string2 are the same!!!");
    }
    else {
        printf("String1 and string2 are not the same =<");
    }



    return 0;
}