#include<iostream>
#include<vector>
using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
};

vector<int> ans;

void preorder(Tree* root) {
    if (root == nullptr) return;
    ans.push_back(root -> val);
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(Tree* root) {
    if (root == nullptr) return;
    inorder(root -> left);
    ans.push_back(root -> val);
    inorder(root -> right);
}

void postorder(Tree* root) {
    if (root == nullptr) return;
    postorder(root -> left);
    postorder(root -> right);
    ans.push_back(root -> val);
}