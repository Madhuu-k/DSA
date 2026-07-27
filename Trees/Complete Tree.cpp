#include<iostream>
#include<vector>
using namespace std;

struct Tree {
    int val;
    Tree *left, *right;
    Tree(int x): val(x), left(nullptr), right(nullptr) {};
};

Tree* root = nullptr;

Tree* createTree(Tree* root, int val) {
    if (!root) {
        return new Tree(val);
    }
   if (val < root -> val) root -> left = createTree(root -> left, val);
   else root -> right = createTree(root -> right, val);

    return root;
}

void preOrder(Tree* root) {
    if (!root) return;
    cout << root -> val << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(Tree* root) {
    if (!root) return;
    inOrder(root -> left);
    cout << root -> val << " ";
    inOrder(root -> right);
}

void postOrder(Tree* root) {
    if (!root) return;
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> val << " ";
}

int main() {
    int n;
    cin >> n;   // number of nodes
    Tree* root = nullptr;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;   // take input
        root = createTree(root, val);
    }

    cout << "Preorder: ";
    preOrder(root);
    cout << "\nInorder: ";
    inOrder(root);
    cout << "\nPostorder: ";
    postOrder(root);
}