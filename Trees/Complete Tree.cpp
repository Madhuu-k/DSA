#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int node;
    TreeNode *left, * right;
    TreeNode(int val): node(val), left(nullptr), right(nullptr) {};
};

TreeNode* insertInTree(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root -> node) root -> left =  insertInTree(root -> left, val);
    else root -> right = insertInTree(root -> right, val);

    return root;
}

void preOrder(TreeNode* root) {
    if (!root) return;
    cout << root -> node << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(TreeNode* root) {
    if (!root) return;
    inOrder(root -> left);
    cout << root -> node << " ";
    inOrder(root -> right);
}

void postOrder(TreeNode* root) {
    if (!root) return;
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> node << " ";
}

int main() {
    TreeNode *root = nullptr;
    int nodes; cout << "Enter number of nodes: ";
    cin >> nodes;
    for (int i = 0; i < nodes; i++) {
        int val; cout << "Enter node " << i + 1 << ": "; cin >> val;
        root = insertInTree(root, val);
    }
    inOrder(root);
    cout << "\n===========================" << endl;
    preOrder(root);
    cout << "\n===========================" << endl;
    postOrder(root);
    cout << "\n===========================" << endl;

    return 0;
}