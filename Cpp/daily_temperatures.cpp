class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> wait_days(temperatures.size(), 0); 
        vector<int> ind_stack = {};
        
        for (int i =0; i<temperatures.size(); i++)
        {
            while (!ind_stack.empty() && temperatures[i] > temperatures[ind_stack.back()])
            {
                int ind = ind_stack.back();
                wait_days[ind] = i - ind;
                ind_stack.pop_back();
            }

            ind_stack.push_back(i);
        }
        

        return wait_days;
        
    }
};