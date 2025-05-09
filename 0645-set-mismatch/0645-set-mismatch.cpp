class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        unordered_set<int> uniqueNum(nums.begin(),nums.end());
        unordered_map<int,int> freqMap;

        int rangeSum = 0;
        int uniqueNumSum = 0;

        for(int num : uniqueNum) {
            uniqueNumSum += num;
        }

        int n = nums.size();

        rangeSum = n*(n+1)/2;

        int missingNum = rangeSum - uniqueNumSum;

        for(int num : nums) {
            freqMap[num]++;
        }

        
        for(const auto& pair : freqMap) {
            if(pair.second == 2) {
                result.push_back(pair.first);
            }
        }

        result.push_back(missingNum);

        return result;
    }
};