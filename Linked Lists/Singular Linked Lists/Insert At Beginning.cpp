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

void insertAtBeginning(int val) {
    node* newNode = new node(val);
    newNode -> next = start;
    start = newNode;
}

void displayList() {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

int main() {
    int n, val;
    cout << "Enter the number of nodes you want to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter data: ";
        cin >> val;
        insertAtBeginning(val);
    }

    displayList();
    return 0;

}