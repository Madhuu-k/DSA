#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 0, 0, 1, 1, 2, 2, 2, 1, 0, 2, 2, 1, 0};
    int c0 = 0, c1 = 0, c2 = 0;
    for (int x : arr) {
        if (x == 0) c0++;
        else if (x == 1) c1++;
        else c2++;
    }

    vector<int> res;
    for (int i = 0; i < c0; i++) res.push_back(0);
    for (int i = 0; i < c1; i++) res.push_back(1);
    for (int i = 0; i < c2; i++) res.push_back(2);

    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";

    return 0;
}