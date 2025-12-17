#include<iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

int checkBalance(Tree* root) {
    if (root == nullptr) return 0;

    int leftH = checkBalance(root -> left);
    if (leftH == -1) return -1;

    int rightH = checkBalance(root -> right);
    if (rightH == -1) return -1;

    if (abs(leftH - rightH) > 1) return -1;

    return 1 + max(leftH, rightH);
}

bool isBalanced(Tree* root) {
    return checkBalance(root) != -1;
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    root -> right -> right -> right = new Tree(6);
    cout << isBalanced(root) << endl;
    return 0;
}