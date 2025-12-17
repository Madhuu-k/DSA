#include<iostream>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

int diameter = 0;

int diameterOfTree(Tree* root) {
    if (root == nullptr) return 0;

    int leftH = diameterOfTree(root -> left);
    int rightH = diameterOfTree(root -> right);

    diameter = max(diameter, leftH + rightH);
    return 1 + max(leftH, rightH);
}

int getDiameter(Tree* root) {
    diameter = 0;
    diameterOfTree(root);
    return diameter;
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    root -> right -> right -> right = new Tree(6);
    root -> right -> right -> left = new Tree(7);
    cout << "Diameter of Tree: " << getDiameter(root) << endl;
    return 0;
}