#include <iostream>
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

bool isPalindrome(node* start) {
    if (!start || !start -> next) return true;

    node* slow = start;
    node* fast = start;

    while (fast -> next && fast -> next -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    node* prev = nullptr;
    node* temp = slow -> next;
    node* next = nullptr;

    while (temp) {
        next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
    }

    node* p1 = start;
    node* p2 = prev;

    while (p2) {
        if (p1 -> data != p2 -> data) return false;
        p1 = p1 -> next;
        p2 = p2 -> next;
    }

    return true;
}

int main() {
    int n; cout << "Total number of nodes: "; cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    displayList(start);
    bool isPlindrme = isPalindrome(start);
    if (isPlindrme) cout << "The Linked List is a palindrome!";
    else cout << "The Linked List is not a palindrome!";
    return 0;
}