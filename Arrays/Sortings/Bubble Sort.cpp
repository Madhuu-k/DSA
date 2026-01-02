#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = {10, 20, 32, 91, 19, 92, 2, 1};
    BubbleSort(arr);
    cout << "Sorted Array: ";
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}