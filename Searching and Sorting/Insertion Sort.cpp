#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 82, 73, 1, 48, 21, 20, 55, 39};

    // CHECK EACH ELEMENT AND KEEP WHERE THEY BELONG
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}