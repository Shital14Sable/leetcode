class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out_vector = {};
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]> 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int l = i+1;
            int r = nums.size()-1;

            while(l<r)
            {
                int three_sum = nums[i] + nums[l] + nums[r];
                if (three_sum == 0)
                {
                    out_vector.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (nums[l] == nums[l-1] and l<r) l++;
                } 
                else if (three_sum > 0) r--;
                else l++;
            }
        }
        return out_vector;
    }
};