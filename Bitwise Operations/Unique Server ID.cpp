#include <iostream>
#include<vector>
using namespace std;

int findMasterServer(vector<int>& server_ids) {
    int master_id = 0;
    for (int x : server_ids) master_id ^= x;
    return master_id;
}

int main() {
    vector<int> server_ids = {7, 3, 7};
    cout << findMasterServer(server_ids) << endl;
    return 0;
}