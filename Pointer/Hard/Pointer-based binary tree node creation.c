#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int val) {
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

int main() {
    struct Node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);

    printf("Root: %d Left: %d Right: %d\n", root->data, root->left->data, root->right->data);
    return 0;
}
