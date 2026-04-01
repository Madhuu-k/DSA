#include <iostream>
#include <climits>   // for INT_MIN
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;

    Tree(int val) : x(val), left(nullptr), right(nullptr) {}
};

int maxInTree(Tree* root) {
    if (root == nullptr) return INT_MIN;
    int left = maxInTree(root->left);
    int right = maxInTree(root->right);

    return max(root->x, max(left, right));
}

int main() {
    // Manually building a binary tree
    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);

    cout << "Maximum value in tree: " << maxInTree(root) << endl;
    return 0;
}