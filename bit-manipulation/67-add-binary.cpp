#include <iostream>
#include <string>

using std::string;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        char carry = '0';
        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0) {
            char ai = (i >= 0 ? a[i] : '0');
            char bj = (j >= 0 ? b[j] : '0');

            int sum = (ai - '0') + (bj - '0') + (carry - '0');

            char digit = (sum % 2) + '0';
            carry = (sum / 2) + '0';

            res = digit + res;

            i--; j--;
        }

        if (carry == '1') res = '1' + res;

        return res;
    }
};

int main()
{
    Solution sol;
    string result = sol.addBinary("100", "111");

    std::cout << result;
}