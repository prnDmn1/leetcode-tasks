class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for (auto i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] == 0)
            {
                arr.emplace(arr.begin() + i, 0);
                arr.pop_back();
                i++;
            }
        }
    }
};