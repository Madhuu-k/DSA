#include<iostream>
#include<queue>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

void levelOrderTraversal(Tree* root) {
    if (root == nullptr) return;
    queue<Tree*> q;
    q.push(root);

    while (!q.empty()) {
        Tree* temp = q.front();
        q.pop();

        cout << temp -> x << " ";
        if (temp -> left) q.push(temp -> left);
        if (temp -> right) q.push(temp -> right);
    }
}

int main() {
    Tree* root = new Tree(1);
    root -> left = new Tree(2);
    root -> right = new Tree(3);
    root -> left -> left = new Tree(4);
    root -> right -> right = new Tree(5);
    root -> right -> right -> right = new Tree(6);
    root -> right -> right -> left = new Tree(7);
    levelOrderTraversal(root);
    return 0;
}