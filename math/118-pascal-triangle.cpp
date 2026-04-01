#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        if (numRows == 0) return pascal;

        pascal.push_back({1});

        for (int i = 1; i < numRows; i++) {
            vector<int> row;
            row.push_back(1);

            for (int j = 1; j < i; j++) {
                row.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
            }

            row.push_back(1);
            pascal.push_back(row);
        }

        return pascal;
    }
};

// Test

int main() {
    Solution sol;
    int numRows = 5;
    vector<vector<int>> result = sol.generate(numRows);

    for (auto &row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
}