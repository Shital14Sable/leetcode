class Solution {
public:
    int characterReplacement(string s, int k) {
        size_t s_len = s.size();
        if (s_len <= 1) return s_len;
        vector<size_t> s_count(26,0);
        for (size_t i=0; i<k; i++){
            s_count[int(s[i])- int('A')] += 1;
        }
        size_t l = 0;
        size_t r = k;
        if (r == s_len) return r;

        size_t s_sum;
        size_t main_char = *max_element(s_count.begin(), s_count.end());
        size_t max_count = accumulate(s_count.begin(), s_count.end(), 0);
        size_t k_temp = max_count - main_char;
        
        while (r < s_len && l<=r){
            if (k_temp <= k){
                s_count[int(s[r])- int('A')] += 1;
                r+= 1;
            }
            else if(k_temp > k){
                s_count[int(s[l])- int('A')] -= 1;
                l += 1;
            }
            main_char = *max_element(s_count.begin(), s_count.end());
            s_sum = accumulate(s_count.begin(), s_count.end(), 0);
            k_temp = s_sum - main_char;
            if (k_temp <= k) max_count = max(max_count, s_sum);
        }
        return max_count;
    }
};
