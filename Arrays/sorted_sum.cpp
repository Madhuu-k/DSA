#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cout << "Enter the number of elements: "; cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: "; for (int i = 0; i < n; i++) cin >> arr[i];
    int target; cout << "Enter the target: "; cin >> target;

    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int sum = arr[left] + arr[right];
        if (target == sum) {
            cout << "Target exists";
            break;
        }
        else if (target < sum) right--;
        else left++;
    }
    return 0;
}