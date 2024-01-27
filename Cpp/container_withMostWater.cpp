class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_vol, l, r;
        max_vol = l = 0;
        r = height.size() - 1;

        while (l<r)
        {
            max_vol = max(max_vol, min(height[l], height[r]) * (r-l));
            if (height[l] < height[r]) ++l;
            else if (height[r] <= height[l]) --r;
        }
        return max_vol;
    }
};