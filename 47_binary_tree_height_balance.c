#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(int val) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

int height(struct Node* root) {
    if(root == NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return (lh > rh ? lh : rh) + 1;
}

int isBalanced(struct Node* root) {
    if(root == NULL) return 1;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    return 0;
}

int main() {
    struct Node* root = create(10);
    root->left = create(5);
    root->right = create(15);
    root->left->left = create(2);
    root->left->right = create(7);

    printf("Height: %d\n", height(root));
    printf("Balanced: %s\n", isBalanced(root) ? "Yes" : "No");

    return 0;
}