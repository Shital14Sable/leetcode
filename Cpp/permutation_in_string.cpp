class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size()< s1.size()) return false;
        vector<size_t> s1_count(26,0), s2_count(26,0);
        size_t matches = 0;
        for (size_t i=0; i<s1.size(); i++){
            s1_count[int(s1[i])- int('a')] += 1;
            s2_count[int(s2[i])- int('a')] += 1;
        }
        
        for (size_t j=0; j<26;j++){
            if (s1_count[j]== s2_count[j]) matches ++;
        }
        int l = 0;
        for (int r=s1.size(); r<s2.size(); r++){
            if (matches==26) return true;
            int index = int(s2[r]) - int('a');
            s2_count[index] += 1;
            if (s2_count[index] == s1_count[index]) matches += 1;
            else if (s1_count[index] + 1 == s2_count[index]) matches -= 1;

            index = int(s2[l]) - int('a');
            s2_count[index] -= 1;
            if (s2_count[index] == s1_count[index]) matches += 1;
            else if (s1_count[index] - 1 == s2_count[index]) matches -= 1;
            l++;
        }
        return matches==26;
    }
};