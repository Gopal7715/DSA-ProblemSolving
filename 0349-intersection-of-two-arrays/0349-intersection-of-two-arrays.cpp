class Solution {
public:

bool binarySearch(vector<int> & nums, int target) {
    int left = 0;
    int right = nums.size()-1;

    int mid = left + (right-left)/2;

    while(left <= right) {
        if(nums[mid] == target) {
            return true;
        }

        else if(nums[mid] > target) {
            right = mid - 1;
        }

        else if(nums[mid] < target) {
            left = mid + 1;
        }
       
        mid = left + (right-left)/2;  
    }

    return false;
} 

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        vector<int> res;
        sort(nums2.begin(),nums2.end());

        for(int num : nums1) {
            if(binarySearch(nums2,num) && !seen.count(num) ) {
                res.push_back(num);
                seen.insert(num);
            }
        }

        return res;
    }
};