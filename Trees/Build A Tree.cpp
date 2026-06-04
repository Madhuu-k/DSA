#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

TreeNode* insertNode(TreeNode* root, int data) {
    if (!root) return new TreeNode(data);
    if (root -> val > data) root -> right = insertNode(root -> right, data);
    else root -> left = insertNode(root -> left, data);
}

// INORDER: LEFT -> ROOT -> RIGHT
// PREORDER: ROOT -> LEFT -> RIGHT
// POSTORDER: LEFT -> ROOT -> RIGHT

int height(TreeNode* root) {
    if (!root) return 0;
    int left = height(root -> left);
    int right = height(root -> right);
    return 1 + max(left, right);
}

int maxDia = 0;
int diameter(TreeNode* root) {
    if (!root) return 0;
    int left = height(root -> left);
    int right = height(root -> right);
    maxDia = max(maxDia, left + right);
    return 1 + max(left, right);
}

