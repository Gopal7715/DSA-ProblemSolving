class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        int maxProduct = INT_MIN;
        int prod = 1;

        while( n != 0) {
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;
        }

        for(int i = 0; i < digits.size();i++) {
            for(int j = i+1;j<digits.size();j++) {
                prod = digits[i]*digits[j];

                if(prod > maxProduct) {
                    maxProduct = prod;
                }
            }
        }

        return maxProduct;
    }
};