class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0, longest_len = 0;
        unordered_set<char> seen_str;

        for (int i=0; i<s.size(); i++){
            while (seen_str.find(s[i]) != seen_str.end()){
                seen_str.erase(s[j]);
                j++;
            }
            longest_len = max(longest_len, i - j + 1);
            seen_str.insert(s[i]);
        }
        return longest_len;
        
    }
};