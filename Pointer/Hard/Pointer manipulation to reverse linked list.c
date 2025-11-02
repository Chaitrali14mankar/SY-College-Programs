#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* reverse(struct Node *head) {
    struct Node *prev = NULL, *next = NULL;
    while (head) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

int main() {
    struct Node *a = malloc(sizeof(struct Node));
    struct Node *b = malloc(sizeof(struct Node));
    struct Node *c = malloc(sizeof(struct Node));
    a->data = 1; b->data = 2; c->data = 3;
    a->next = b; b->next = c; c->next = NULL;

    a = reverse(a);
    while (a) { printf("%d ", a->data); a = a->next; }
    return 0;
}
