#include<iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

int LeafNodes(Tree* root) {
    if (root == nullptr) return 0;

    if (root -> left == nullptr && root -> right == nullptr) return 1;

    return LeafNodes(root -> left) + LeafNodes(root -> right);
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    root -> right -> right -> right = new Tree(6);
    root -> right -> right -> left = new Tree(7);
    cout << "Total Trees Leaf Nodes: " << LeafNodes(root) << endl;
    return 0;
}
