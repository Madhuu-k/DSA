#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    cout << "The reversd array: ";
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}
