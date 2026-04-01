#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int data): val(data), left(nullptr), right(nullptr) {}
};

TreeNode* insertNode(TreeNode* root, int data) {
    if (!root) return new TreeNode(data);
    if (root -> val >  data) root -> left = insertNode(root -> left, data);
    else root -> right = insertNode(root -> right, data);
    return root;
}

TreeNode* findMin(TreeNode* root) {
    while (root -> left) root = root -> left;
    return root;
}

TreeNode* deleteNode(TreeNode* root, int target) {
    if (!root) return nullptr;

    if (root -> val > target) root -> left = deleteNode(root -> left, target);
    else if (root -> val < target) root -> right = deleteNode(root -> right, target);
    else {
        // CASE 1 - NO CHILD
        if (!root -> left && !root -> right) return nullptr;

        // CASE 2 - ONE CHILD - EITHER ON LEFT / RIGHT
        if (!root -> left) return root -> right; // NO CHILD ON LEFT ONLY ON RIGHT
        if (!root -> right) return root -> left; // NO CHILD ON RIGHT ONLY ON LEFT

        // CASE 3 - TWO CHILDREN
        TreeNode* temp = findMin(root -> right);   // find minimum in right subtree
        root -> val = temp -> val;
        root -> right = deleteNode(root -> right, temp -> val);
     }

    return root;
}

int main() {
    TreeNode* root = nullptr;
    root = insertNode(root, 5);
    insertNode(root, 2);
    insertNode(root, 3);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 6);

    int target = 6;
    return 0;
}