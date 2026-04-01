#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)
            return {1};

        vector<int> row = {1};

        for (int i = 1; i <= rowIndex; i++) {

            for (int j = i - 1; j >= 1; j--) {
                row[j] = row[j] + row[j - 1];
            }

            row.push_back(1);
        }

        return row;
    }
};

// Test

int main()
{
    Solution sol;
    int rowIndex = 4;
    vector<int> result = sol.getRow(rowIndex);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}