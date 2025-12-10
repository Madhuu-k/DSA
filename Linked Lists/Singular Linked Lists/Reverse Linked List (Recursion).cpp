#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val): data(val), next(nullptr) {}
};

void createLst(node* &start) {
    int val;
    cout << "Enter Value: "; cin >> val;
    node* newnode = new node(val);
    if (start == nullptr) {
        start = newnode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp = temp -> next;
    temp -> next = newnode;
}

node* recursiveReverse(node* &start) {
    if (start == nullptr || start -> next == nullptr) return start;
    node* newStart = recursiveReverse(start -> next);

    start -> next -> next = start;
    start -> next = nullptr;

    return newStart;
}

void displayList(node* &start) {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

int main() {
    int n; cout << "Enter number of nodes: ";
    cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createLst(start);
    displayList(start);
    node* reverse = recursiveReverse(start);
    displayList(reverse);
    return 0;
}