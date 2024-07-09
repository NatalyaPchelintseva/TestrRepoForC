// операции с односвязными списками: вставка в конец, удаление из конца, поиск по значению

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node * next;
};

struct Node *PushBack(struct Node *head, int data) {
    struct Node *temp = head, *new;
    if (temp != NULL) {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        new = malloc(sizeof(struct Node));
        new->data = data;
        new->next = NULL;
        temp->next = new;
        printf("the item is added again!\n");
    }
    else {
        head = malloc(sizeof(struct Node));
        head->data = data;
        head->next = NULL;
        printf("the item is added!\n");
    }
    return head;
}

void PrintList(struct Node *head) {
    struct Node *temp = head;
    printf("the list data:\n");
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    putchar('\n');
}

void RemoveLast(struct Node *head) {
    struct Node *temp = head, *ptr;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    ptr = temp;
    temp->next = NULL;
    free(ptr);
}

void FindItem(struct Node *head, int data) {
    struct Node *temp = head;
    int isFound = 0;
    while (temp != NULL) {
        if (temp->data == data) {
            isFound = 1;
            break;
        }
        temp = temp->next;
    }
    if (isFound) {
        printf("the item %d is found!\n", data);
    }
    else {
        printf("the item %d is not found!\n", data);
    }
}

int main() {
    struct Node *head = NULL;
    head = PushBack(head, 1);
    head = PushBack(head, 2);
    head = PushBack(head, 3);
    head = PushBack(head, 4);
    head = PushBack(head, 5);
    PrintList(head);

    RemoveLast(head);
    PrintList(head);
    
    RemoveLast(head);
    PrintList(head);
    
    RemoveLast(head);
    PrintList(head);

    FindItem(head, 2);
    FindItem(head, 7);

    head = PushBack(head, 7);
    PrintList(head);
    FindItem(head, 7);

    return 0;
}