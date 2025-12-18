#include<iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

Tree* lowestCommonAncestor(Tree* root, Tree* n1, Tree* n2) {
    if (root == nullptr) return nullptr;

    if (root == n1 || root == n2) return  root;
    Tree* left = lowestCommonAncestor(root -> left, n1, n2);
    Tree* right = lowestCommonAncestor(root -> right, n1, n2);

    if (left && right) return root;

    return left ? left : right;
}

int main() {
    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);

    // Test LCA
    Tree* n1 = root->left->left;   // Node 4
    Tree* n2 = root->left->right;  // Node 5

    Tree* lca = lowestCommonAncestor(root, n1, n2);

    if (lca) {
        cout << "Lowest Common Ancestor of " << n1->x << " and " << n2->x
             << " is: " << lca->x << endl;
    } else {
        cout << "No common ancestor found." << endl;
    }

    return 0;

}