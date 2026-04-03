#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = (start + end)/2;

            if (target == nums[mid]) return mid;
            if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return start;
    }
};

int main()
{
    Solution sol;

    vector<int> digits = {1, 3, 5, 7, 9, 11, 13};
    int result = sol.searchInsert(digits, 10);

    for (int x : digits) {
        cout << x << "  ";
    }

    cout << "\nInsert position : " << result;
}