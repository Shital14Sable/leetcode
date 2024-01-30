class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int nums_size = nums.size();
        vector<int> v = {0};
        if (nums_size == 0)  return 0;
        sort(nums.begin(), nums.end());
        int count = 1;
        v.push_back(count);
        for (size_t i = 1; i <nums_size; i++)
        {
            if (nums[i] == nums[i-1] + 1)
            {
                count += 1;
                v.push_back(count);
            }
            else if(nums[i] == nums[i-1]) continue;
            else count = 1;

        }
        return *max_element(v.begin(), v.end());
        
    }
};
