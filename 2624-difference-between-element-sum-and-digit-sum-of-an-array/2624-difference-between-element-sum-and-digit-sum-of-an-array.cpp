class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        
        for(int num : nums) {
            elementSum += num;
            
            if(num <= 9) {
                digitSum += num;
            }
            
            else {
                while(num != 0) {
                    int digit = num % 10;
                    digitSum += digit;
                    
                    num /= 10;
                }
            }
        }
        
        return abs(elementSum - digitSum);
    }
};