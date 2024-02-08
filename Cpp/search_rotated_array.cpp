class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l, mid;
        int r = nums.size() - 1;
        l = 0;

        while (l<=r){
            mid = (l+r)/2;
            if (nums[mid] == target) return mid;
            if (nums[mid] >= nums[l]){
                if (nums[l] > target || nums[mid] < target) l = mid + 1;
                else r = mid - 1;
            }
            else {
                if (target < nums[mid] or target > nums[r])  r = mid - 1;
                else l = mid + 1;
            }
        }
        return -1;
    }
};