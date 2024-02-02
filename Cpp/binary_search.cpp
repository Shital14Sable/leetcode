class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if (target > nums.at(mid))
            {
                l = mid + 1;

            }
            else if(target < nums.at(mid))
            {

                r = mid - 1;
            }
            else
            {
                return mid;
            }                
        }
        return -1;
    }
    
};