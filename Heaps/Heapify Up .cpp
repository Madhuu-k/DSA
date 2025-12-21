#include<iostream>
#include<vector>
using namespace std;

vector<int> heap;

void heapifyUp(int i) {
    while (i > 0) {
        int p = (i - 1) / 2;
        if (heap[p] < heap[i]) {
            swap(heap[i], heap[p]);
            i = p;
        } else break;
    }
}


int main() {
    // Insert elements one by one and heapify
    heap.push_back(1);
    heapifyUp(heap.size() - 1);

    heap.push_back(2);
    heapifyUp(heap.size() - 1);

    heap.push_back(3);
    heapifyUp(heap.size() - 1);

    heap.push_back(4);
    heapifyUp(heap.size() - 1);

    heap.push_back(5);
    heapifyUp(heap.size() - 1);

    for (auto it : heap) cout << it << " ";
    return 0;
}
