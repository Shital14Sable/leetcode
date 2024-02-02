class Solution {
public:
    int mySqrt(int x) {
        if (x == 1)
             return 1;
        int l = 0;
        int r = x;
        int res;
        while(l <= r) {
            long long mid = l + (r-l)/2;
            long long sq = mid*mid;
            if (sq <= x) {
                res = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        return res;
    }
};