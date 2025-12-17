#include<iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

int TotalNodes(Tree* root) {
    if (root == nullptr) return 0;

    return 1 + TotalNodes(root -> left) + TotalNodes(root -> right);
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    root -> right -> right -> right = new Tree(6);
    cout << "Total Tree Nodes: " << TotalNodes(root) << endl;
    return 0;
}
