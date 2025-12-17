#include <iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

Tree* insertBST(Tree* root, int val) {
    if (root == nullptr) return new Tree(val);

    if (val < root -> x) root -> left = insertBST(root -> left, val);
    else root -> right = insertBST(root -> right, val);

    return root;
}

int main() {
    Tree* root = new Tree(1);
    insertBST(root, 2);
    insertBST(root , 3);
    insertBST(root, 4);
    insertBST(root, 5);
    insertBST(root, 6);
    return 0;
}