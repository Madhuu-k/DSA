#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    std::vector<int> arr = {0, 1, 2, 0, 0, 1, 1, 2, 2, 0, 0};
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) mid++;
        else {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}