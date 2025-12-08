#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

void createList(node* &start) {
    int num; cout << "Enter node value: ";
    cin >> num;
    node* newnode = new node(num);
    if (start == nullptr) {
        start = newnode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp = temp -> next;
    temp -> next = newnode;
}

void displayList(node* start) {
    if (start == nullptr) return;
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

void deleteAtPosition(node* &start, int pos) {
    if (start == nullptr || pos <= 0) return;
    if (start -> next == nullptr) {
        delete start;
        start = nullptr;
        return;
    }
    node* temp = start;
    for (int i = 0; i < pos - 1; i++) {
        if (temp == nullptr) return;
        temp = temp -> next;
    }

    node *toDelete = temp -> next;
    temp -> next = toDelete -> next;
    delete toDelete;
}

int main() {
    int n; cout << "Enter number of nodes: ";
    cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    displayList(start);
    int pos; cout << "Enter position to delete: ";
    cin >> pos;
    deleteAtPosition(start, pos);
    displayList(start);
    return 0;
}