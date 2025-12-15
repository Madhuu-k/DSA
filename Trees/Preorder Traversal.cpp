#include<iostream>
using namespace std;

// Preorder = Right -> Left -> Root

struct  Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

void preorder(Tree* root) {
    if (root == nullptr) return;
    cout << root -> x << " ";
    preorder(root -> left);
    preorder(root -> right);
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);

    preorder(root);
    return 0;
}