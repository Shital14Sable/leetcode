class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if (h == piles.size()) return *max_element(piles.begin(), piles.end());
        unsigned r, l, k, res, est_time;
        l = 1;
        res = r = *max_element(piles.begin(), piles.end());;
        while (l<=r){
            k = (l+r) /2;
            est_time = 0;
            for (int i=0; i<piles.size(); i++){
                est_time += piles[i]/k;
                if (remainder(piles[i], k)) est_time++;
            }
            if (est_time <= h){
                res = min(res, k);
                r = k - 1;
            }
            else l = k+1;
        }
        return res;
    }
};