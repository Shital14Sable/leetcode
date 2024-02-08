/*
    Design time-based key-value structure, multiple vals at diff times

    Hash map, since timestamps are naturally in order, binary search

    Time: O(log n)
    Space: O(n)
*/

class TimeMap {
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
         time_map[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp) {
        string value = "";
        int l, r, mid;
        l = 0;
        r = time_map[key].size()-1;

        while(l <= r)
        {
            mid = (l + r) / 2;
            if (timestamp >= time_map[key][mid].second){
                value = time_map[key][mid].first;
                l = mid + 1;
            }
            else r = mid - 1; 
        }
        return value;
    }

private:
    unordered_map<string, vector<pair<string, int>>> time_map;
};


/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */