#include<iostream>
#include<queue>
#include<vector>
using namespace std;

long long minCost(vector<long long> ropes) {
    priority_queue<long long, vector<long long>, greater<long long>> pq(ropes.begin(), ropes.end());

    long long cost = 0;
    while (pq.size() > 1) {
        long long a = pq.top(); pq.pop();
        long long b = pq.top(); pq.pop();
        cost += a + b;
        pq.push(a + b);
    }
    return cost;
}

int main() {
    vector<long long> ropes = {4, 3, 2, 6};
    cout << "Minimum cost: " << minCost(ropes) << endl;
    return 0;
}