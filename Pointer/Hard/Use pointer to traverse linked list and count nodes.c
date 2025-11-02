#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int count(struct Node *head) {
    int c = 0;
    while (head) {
        c++;
        head = head->next;
    }
    return c;
}

int main() {
    struct Node *a = malloc(sizeof(struct Node));
    struct Node *b = malloc(sizeof(struct Node));
    struct Node *c = malloc(sizeof(struct Node));
    a->data = 1; b->data = 2; c->data = 3;
    a->next = b; b->next = c; c->next = NULL;
    printf("Nodes: %d\n", count(a));
    return 0;
}
