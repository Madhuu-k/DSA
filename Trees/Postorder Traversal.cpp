#include<iostream>
using namespace std;

// Postorder = Left -> Root -> Right

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

void postorder(Tree* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root -> x << " ";
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);

    postorder(root);
    return 0;
}