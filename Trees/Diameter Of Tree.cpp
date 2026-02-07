#include<iostream>
#include<vector>
using namespace std;

int diameter = 0;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree(int x): val(x), left(nullptr), right(nullptr) {}
};

int diameterOfTree(Tree* root) {
    if (root == nullptr) return 0;
    int left = diameterOfTree(root->left);
    int right = diameterOfTree(root->right);
    diameter = max(diameter, left + right);
    return 1 + max(left, right);
}

int main() {
    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);
    cout << "Height: " << diameterOfTree(root) << endl;
    cout << "Diameter: " << diameter << endl;
    return 0;
}