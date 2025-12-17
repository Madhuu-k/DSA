#include<iostream>
using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree(int x) : val(x), left(nullptr), right(nullptr) {}
};

int findTreeHeight(Tree* root) {
    if (root == nullptr) return -1;
    int leftH = findTreeHeight(root -> left);
    int rightH = findTreeHeight(root -> right);

    return 1 + max(leftH, rightH);
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    root -> right -> right -> right = new Tree(6);
    cout << "Tree Height: " << findTreeHeight(root) << endl;
    return 0;
}