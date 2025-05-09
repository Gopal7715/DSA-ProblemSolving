class Solution {
public:
    int alternateDigitSum(int n) {
        string str = to_string(n);

        int sign = 1;
        int ans = 0;

        for(char ch : str) {
            ans += sign*( ch- '0');
            sign *= -1;
        }

        return ans;
    }
};