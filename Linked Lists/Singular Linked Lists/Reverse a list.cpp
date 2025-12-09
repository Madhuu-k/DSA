#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val):data(val), next(nullptr) {}
};

void createList(node* &start) {
    int val; cout << "Enter the data: ";
    cin >> val;
    node* newnode = new node(val);
    if (start == nullptr) {
        start = newnode;
        return;
    }
    node* temp = start;
    while (temp -> next != nullptr) temp = temp -> next;
    temp -> next = newnode;
}

node* reverseList(node* start) {
    node* prev = nullptr;
    node* temp = start;
    node* next = nullptr;

    while (temp != nullptr) {
        next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}

void displayList(node* start) {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << " NULL ";
}

int main() {
    int n; cout << "Enter the number of nodes: ";
    cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    displayList(start);
    node* reversed = reverseList(start);
    cout << "\nThe reversed list is: ";
    displayList(reversed);
    return 0;
}