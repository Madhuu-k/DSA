#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

void createList(node* &start) {
    int val;
    cout << "Enter the data: ";
    cin >> val;
    node* newnode = new node(val);
    if (start == nullptr) {
        start = newnode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp =  temp -> next;
    temp -> next = newnode;
}

void DeleteBegin(node*  &start) {
    if (start == nullptr) return;
    node* temp = start;
    start = start -> next;
    delete temp;
}

void displayList(node* &start) {
    if (start == nullptr) return;
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

int main() {
    node* start = nullptr;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) createList(start);
    DeleteBegin(start);
    displayList(start);
    return 0;
}