class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto i = 0; i < nums.size(); i++)
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        return nums.size();
    }
};