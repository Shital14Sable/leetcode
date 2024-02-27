class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    while(nums[0]!=nums[nums[0]]){
        // cout << nums[0] << "        " << nums[nums[0]] << endl;
        swap(nums[0],nums[nums[0]]);
    }
        return nums[0];
    }
};