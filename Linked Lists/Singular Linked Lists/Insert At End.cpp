#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int val) {
        data = val;
        next = nullptr;
    }
};

node* start = nullptr;

void insertAtStarting(int val) {
    node* newNode = new node(val);
    newNode -> next = start;
    start = newNode;
}

void insertAtEnd(int val) {
    node* newNode = new node(val);

    if (start == nullptr) {
        start = newNode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp = temp -> next;
    temp -> next = newNode;
}

void display() {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {
    int n, val;
    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter data: ";
        cin >> val;
        insertAtStarting(val);
    }

    insertAtEnd(202);
    display();
    return 0;
}