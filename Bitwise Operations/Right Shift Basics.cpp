#include<iostream>
using namespace std;

int main() {
    // RIGHT SHIFT OPERATION DIVIDES THE NUMBER BY 2
    int n; cout << "Enter the number: ";
    cin >> n;
    int res = n >> 1; // DIVIDES n BY 2 - 1 TIME
    cout << "Right Shift Operation: " << res;
    return 0;
}