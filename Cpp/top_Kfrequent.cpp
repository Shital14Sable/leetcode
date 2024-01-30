class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector< pair <int,int> > vect(1);
        vector<bool> visited(nums.size(), false);
        for (size_t i = 0; i < nums.size(); i++) {
            if (visited[i] == true)
                continue;
            int count = 1;
            for (size_t j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    visited[j] = true;
                    count++;
                }
            }
            vect.push_back(make_pair(count, nums[i]));
        }
        sort(vect.begin(), vect.end());
        std::vector<int> ret_vect(k);
        int l = 0;
        int mn = vect.size();
        while (k>0)
        {
            ret_vect[l] = vect[mn-1].second;
            l++;
            mn--;
            k--;
        }
        return ret_vect;
    }
};