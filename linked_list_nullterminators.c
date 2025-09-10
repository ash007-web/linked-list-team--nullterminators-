#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node **head, int val) {
    struct Node *newNode = createNode(val);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(struct Node *head) {
    struct Node *temp = head;
    printf("Roll Numbers in Linked List: ");
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf(" & ");
        }
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;


    insertEnd(&head, 1);


    insertEnd(&head, 17);


    display(head);

    return 0;
}

