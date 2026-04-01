#include<iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val): data(val), left(nullptr), right(nullptr) {}
};

TreeNode *insert(TreeNode* root, int val) {
    if (root == nullptr) return new TreeNode(val);
    if (val < root -> data) root -> left = insert(root -> left, val);
    else root -> right = insert(root -> right, val);
    return root;
}

void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);

}

int main() {
}