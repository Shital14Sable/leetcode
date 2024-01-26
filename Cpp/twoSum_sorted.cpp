class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;

        while(l<r){
            int curr_sum = numbers[l] + numbers[r];
            if (curr_sum == target){
                return {++l, ++r};
            } 
            else if (curr_sum > target)r--;
            else l++;
        }
        return {-1};
        
    }
};