#include <iostream>
#include <algorithm>
using namespace std;

struct Tree {
    int x;
    Tree* left;
    Tree* right;
    Tree(int val): x(val), left(nullptr), right(nullptr) {}
};

Tree* insertBST(Tree* root, int val) {
    if (root == nullptr) return new Tree(val);

    if (val < root -> x) root -> left = insertBST(root -> left, val);
    else root -> right = insertBST(root -> right, val);

    return root;
}

bool isValidBST(Tree* root, long long minVal, long long maxVal) {
    if (root == nullptr) return true;

    if (root -> x <= minVal || root -> x >= maxVal) return false;
    return isValidBST(root, minVal, root -> x) && isValidBST(root, root -> x, maxVal);
}

int main() {
    Tree* root = new Tree(1);
    insertBST(root, 2);
    insertBST(root , 3);
    insertBST(root, 4);
    insertBST(root, 5);
    insertBST(root, 6);
    cout << (isValidBST(root, LLONG_MIN, LLONG_MAX) ? "Yes" : "No") << endl;
    return 0;
    return 0;
}