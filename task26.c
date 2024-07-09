// односвязный список

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node * next;
};

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *temp, *prev = head;
    int size = 0;

    printf("enter tne count of numbers: ");
    scanf("%d", &size);

    printf("enter tne first number: ");
    scanf("%d", &head->data);
    for (int i = 1; i < size; i++) {
        temp = malloc(sizeof(struct Node));
        printf("enter tne %d number: ", i+1);
        scanf("%d", &temp->data);
        prev->next = temp;
        prev = temp;
    }

    temp = head;
    while (temp != NULL) {
        printf("%4d", temp->data);
        temp = temp->next;
    }
    putchar('\n');

    return 0;
}