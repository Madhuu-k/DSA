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

void displayList(node* &start) {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

node* reverseBetween(node* start, int m, int n) {
    // if (!start || m == n) return start;
    //
    // node dummy(0);
    // dummy.next = start;
    // node* prev = &dummy;
    //
    // // move to m-1 node
    // for (int i = 1; i < m; i++) prev = prev -> next;
    //
    // node* temp = prev -> next;
    // node* next = nullptr;
    //
    // // reverse (n-m+1) nodes
    // for (int i = 0; i < n - m; i++) {
    //     next = temp -> next;
    //     temp -> next = next -> next;
    //     next -> next = prev -> next;
    //     prev -> next = next;
    // }

    return dummy.next;
}