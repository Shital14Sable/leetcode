class TimeMap:

    def __init__(self):
        self.time_map = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key in self.time_map:
            self.time_map[key][0].append(value)
            self.time_map[key][1].append(timestamp)
        else:
            self.time_map.update({key: [[value], [timestamp]]})
        

    def get(self, key: str, timestamp: int) -> str:
        value = ""
        if key not in self.time_map:
            return value

        l, r = 0, len(self.time_map[key][1])-1
        while l <= r:
            mid = (l+r)//2
            if self.time_map[key][1][mid] <= timestamp:
                value = self.time_map[key][0][mid]
                l = mid + 1
            else:
                r = mid - 1
        return value

        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)