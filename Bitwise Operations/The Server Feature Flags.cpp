#include<iostream>
#include<vector>
using namespace std;

bool isFeatureEnabled(int config, int x) {
    if (((config >> x) & 1) == 1) return true;
    return false;
}

int main() {
    bool res = isFeatureEnabled(20, 2);
    cout << res << endl;
    return 0;
}

