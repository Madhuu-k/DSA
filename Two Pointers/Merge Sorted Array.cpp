#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr1, int m, vector<int>& arr2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] < arr2[j]) {
            arr1[k] = arr2[j];
            j--;
        }
        else {
            arr1[k] = arr1[i];
            i--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        k--; j--;
    }
}

void mergeLists(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] < arr2[j]) {
            arr1[k] = arr2[j];
            j--;
        }
        else {
            arr1[k] = arr1[i];
            i--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        k--; j--;
    }

}

int main() {
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    mergeLists(arr1, 3, arr2, 2);
    for (int x : arr1) cout << x << " ";
    return 0;
}