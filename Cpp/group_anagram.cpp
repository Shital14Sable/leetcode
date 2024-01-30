class Solution {
public:
    void compare(vector<string>& arr){
    sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
        // Printing the sorted strings
    // for (const auto& str : arr) {
    //     cout << str << " ";
    // }
    // cout << endl;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int strs_size = strs.size();
        std::vector<std::vector<std::string>> vect;
        compare(strs);

        while(!strs.empty()){
            std::vector<std::string> temp_vect;
            std::string t_val = strs[0];
            strs.erase(strs.begin());
            temp_vect.push_back(t_val);
            int j = 0;
            while(j <strs.size() && temp_vect[0].size() == strs[j].size()){
                std::string a = temp_vect[0];
                std::string b = strs[j];
                std::sort(a.begin(), a.end());
                std::sort(b.begin(), b.end());
                // std::cout<< a << j <<std::endl;
                // std::cout<< b <<std::endl;
                if(a == b){
                    temp_vect.push_back(strs[j]);
                    strs.erase(strs.begin() + j);
                }
                else{

                    j++;
                }
            }

            vect.push_back(temp_vect);
        }

        return vect;

    }
};