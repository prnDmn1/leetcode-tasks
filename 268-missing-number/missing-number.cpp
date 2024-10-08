class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size() * (nums.size() + 1) / 2;
        int presum = accumulate(nums.begin(), nums.end(), 0);
        return sum - presum; 
    }
};
