#include<iostream>
using namespace std;

// Inorder = Left -> Root -> Right

struct Tree {
    int x;
    Tree* left;
    Tree* right;

    Tree(int val) : x(val), left(nullptr), right(nullptr) {}
};

void inorder(Tree* root) {
    if (root == nullptr) return;
    inorder(root -> left);
    cout << root -> x << " ";
    inorder(root -> right);
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    inorder(root);
    return 0;
}