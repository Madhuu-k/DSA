#include<iostream>
#include<vector>
using namespace std;

struct Tree {
    Tree* left;
    Tree* right;
    int val;
};

int maxDepth(Tree* root) {
    if (root == nullptr) return 0;
    int left = maxDepth(root -> left);
    int right = maxDepth(root -> right);

    return 1 + max(left, right);
}


int main() {
    Tree* root = new Tree;
    root->val = 1;
    root->left = new Tree;   // allocate a new node for left child
    root->left->val = 2;
    root->left->left = nullptr;
    root->left->right = nullptr;
    root->right = nullptr;   // no right child yet
    cout << maxDepth(root) << endl;
    return 0;
}