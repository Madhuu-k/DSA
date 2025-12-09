#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

void createList(node* &start) {
    int val;
    cout << "Enter Value: ";
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

node* findMiddle(node* &start) {
    node* slow = start;
    node* fast = start;

    while (fast != nullptr && fast -> next != nullptr) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

int main() {
    int n;
    cout << "Enter number of nodes: "; cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    node* middle = findMiddle(start);
    if (middle != nullptr) cout << "Middle of list: " << middle -> data << endl;
    else cout << "List is empty";
    return 0;
}