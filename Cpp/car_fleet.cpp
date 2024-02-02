class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n == 1) return 1;

        vector<pair<int, int>> car_stack;

        for (int i=0; i<n; i++)  car_stack.push_back({position[i], speed[i]});
        
        sort(car_stack.begin(), car_stack.end());
        vector<double> fleet = {};
        for (int j=n-1; j>=0; j--)
        {
            double t = (double) (target-car_stack[j].first)/car_stack[j].second;
            // cout << 'Time' << t << endl;
            fleet.push_back(t);

            if (fleet.size() >= 2 && fleet.back() <= fleet.rbegin()[1]) fleet.pop_back();
        }
        return fleet.size();
        
    }
};