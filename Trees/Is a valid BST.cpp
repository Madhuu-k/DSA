#include<iostream>
using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree(int x): val(x), left(nullptr), right(nullptr) {}
};

bool isValidBST(Tree* root, int minVal, int maxVal) {
    if (root == nullptr) return true;
    if (root -> val <= minVal || root -> val >= maxVal) return false;
    return isValidBST(root -> left, minVal, root -> val) && isValidBST(root -> right, root -> val, maxVal);
}

bool isValidBST(Tree* root) {
    return isValidBST(root, INT_MIN, INT_MAX);
}

int main() {
    Tree *root = nullptr;
    root = new Tree(5);
    root -> left = new Tree(3);
    root -> right = new Tree(7);
    root -> left -> left = new Tree(2);
    root -> right -> right = new Tree(8);
    cout << "It is Valid: " << (isValidBST(root) ? "Yes" : "No") << endl;
    return 0;
}