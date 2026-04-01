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

void inorder(TreeNode* root) {
    if (!root) return;
    // left root right
    inorder(root -> left);
    cout << root -> val << " ";
    inorder(root -> right);
}

void preorder(TreeNode* root) {
    if (!root) return;
    // root left right
    cout << root -> val << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(TreeNode* root) {
    if (!root) return;
    // left right root
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> val << " ";
}

int main() {
    TreeNode* root = nullptr;
    root = insertNode(root, 5);
    insertNode(root, 2);
    insertNode(root, 3);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 6);

    cout << "Inorder traversal: "; inorder(root);
    cout << "\nPreorder traversal: "; preorder(root);
    cout << "\nPostorder traversal: "; postorder(root);

    return 0;
}