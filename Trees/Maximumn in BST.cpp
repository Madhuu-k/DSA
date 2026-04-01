#include <iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;

    Tree(int val) : x(val), left(nullptr), right(nullptr) {}
};

Tree* insert(Tree* root, int val) {
    if (root == nullptr) {
        return new Tree(val);
    }
    if (val < root->x) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

int findMax(Tree* root) {
    while (root -> right) root = root -> right;
    return root-> x;
}

int main() {
    Tree* root = nullptr;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);

    cout << findMax(root) << endl;
    cout << endl;

    return 0;
}