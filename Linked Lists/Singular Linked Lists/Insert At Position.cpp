#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int val) {
        data = val;
        node* next = nullptr;
    }
};

