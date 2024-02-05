class Solution {
public:
    int findMin(vector<int>& nums) {
        int l, mid;
        l = 0;
        int r = nums.size() - 1;
        int min_elem = nums[l];

        while(l <= r){
            if (nums[l] < nums[r]){
                min_elem = min(min_elem, nums[l]);
                break;
            }

            mid = (l+r)/2;
            min_elem = min(min_elem, nums[mid]);
            if (nums[l] <= nums[mid]) l = mid + 1;
            else r = mid - 1;
        }

        return min_elem;        
    }
};