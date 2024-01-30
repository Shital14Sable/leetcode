class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) return 0;
        int l,r, max_left, max_right, total_vol;
        l = total_vol = 0;
        r = height.size()-1;
        max_left = height[l]; 
        max_right = height[r];

        while(l < r)
        {
            if (max_left < max_right)
            {
                l++;
                max_left = max(max_left, height[l]);
                total_vol += max_left - height[l];
            }

            else
            {
                r--;
                max_right = max(max_right, height[r]);
                total_vol += max_right - height[r];

            }
        }
        return total_vol;
    }
};