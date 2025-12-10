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

node* reverseK(node* start, int k) {
    node* temp = start;
    node* prev = nullptr;
    node* next = nullptr;

    // check for k nodes
    node* check = start;
    for (int i = 0; i < k; i++) {
        if (!check) return start;
        check = check -> next;
    }

    int count = 0;

    while (temp != nullptr && count < k) {
        next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
        count++;
    }

    if (next != nullptr) start -> next = reverseK(next, k);

    return prev;
}

void displayList(node* &start) {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}