#include <stdio.h>
#include <stdlib.h>

struct Data {
    int num;
    struct Data *ptr;
};

int main() {
    int inputNum;
    struct Data *head = NULL;
    struct Data *tail = NULL;  // 新增尾部指針

    while (1) {
        scanf("%d", &inputNum);
        if (inputNum == 0) {
            break;
        }

        struct Data *temp = malloc(sizeof(struct Data));
        temp->num = inputNum;
        temp->ptr = NULL;

        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->ptr = temp;
            tail = temp;
        }
    }

    // 輸出鏈表中的數據（按輸入的順序）
    struct Data *print_ptr = head;
    while (print_ptr != NULL) {
        printf("%d ", print_ptr->num);
        print_ptr = print_ptr->ptr;
    }
    printf("\n");

    // 釋放鏈表中的節點內存
    while (head != NULL) {
        struct Data *temp = head;
        head = head->ptr;
        free(temp);
    }

    return 0;
}
