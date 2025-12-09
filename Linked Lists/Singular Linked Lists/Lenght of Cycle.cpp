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

int cycleLength(node* &start) {
    node* slow = start;
    node* fast = start;

    while (fast && fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if (slow == fast) {
            int count = 1;
            slow = slow -> next;
            while (slow != fast) {
                count++;
                slow = slow -> next;
            }
            return count;
        }
    }
    return 0;
}

int main() {
    int n; cout << "Enter the number of nodes: ";
    cin >> n;
    node* start = nullptr;
    for (int i = 0; i < n; i++) createList(start);
    int length = cycleLength(start);
    cout << "Length of Cycle is: " << length << endl;
    return 0;
}