#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // 1. MOVE LEFT TO RIGHT
        for (int j = left; j <= right; j++) result.push_back(matrix[top][j]);
        top++;

        //2. TOP TO BOTTOM
        for (int i = top; i <= bottom; i++) result.push_back(matrix[i][right]);
        right--;

        //3. RIGHT TO LEFT
        if (top <= bottom) {
            for (int j = right; j >= left; j--) result.push_back(matrix[bottom][j]);
            bottom--;
        }

        //4. BOTTOM TO TOP
        if (left <= right) {
            for (int i = bottom; i >= top; i--) result.push_back(matrix[i][left]);
            left++;
        }
    }

    return result;
}