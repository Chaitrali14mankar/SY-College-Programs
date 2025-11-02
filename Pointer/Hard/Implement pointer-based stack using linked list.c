#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **top, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node **top) {
    if (!*top) return -1;
    struct Node *temp = *top;
    int val = temp->data;
    *top = temp->next;
    free(temp);
    return val;
}

int main() {
    struct Node *stack = NULL;
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("Pop: %d\n", pop(&stack));
    printf("Pop: %d\n", pop(&stack));
    return 0;
}
