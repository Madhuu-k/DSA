#include<iostream>
#include<vector>
using namespace std;

struct Tree {
    int val;
    Tree *left, *right;
    Tree(int x): val(x), left(nullptr), right(nullptr) {}
};

Tree* LeastCommonAncestor(Tree* root, Tree* p, Tree* q) {
    if (!root || root == p || root == q) return root;
    Tree* left = LeastCommonAncestor(root -> left, p, q);
    Tree* right = LeastCommonAncestor(root -> right, p ,q);
    if (left && right) return root; // If both sides return null then have same root
    return left ? left : right;
}

int main() {
    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);

    Tree* p = root->left->left;   // node 4
    Tree* q = root->left->right;  // node 5

    Tree* lca = LeastCommonAncestor(root, p, q);
    if (lca) {
        cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;
    } else {
        cout << "No common ancestor found." << endl;
    }

    p = root->left->left;   // node 4
    q = root->right->left;  // node 6
    lca = LeastCommonAncestor(root, p, q);
    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    return 0;

}