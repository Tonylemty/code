#include <stdio.h>
#include <stdlib.h>

struct Data {
    int num;
    struct Data *ptr;
};



int main() {

    int inputNum;
    struct Data *head = NULL;

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
        }
        else {
            temp->ptr = head;
            head = temp;
        }
    }

    struct Data *print_ptr = head;

    // Way 1 to print the number
    while (print_ptr != NULL) {

        printf("%d ", print_ptr->num);
        print_ptr = print_ptr->ptr;
    }
    printf("\n");

    // Way 2 to print the number
    while (head != NULL) {
        struct Data *print_ptr = head;
        head = head->ptr;
        print_ptr->ptr = NULL;
        printf("%d ", print_ptr->num);

    }



    return 0;
}