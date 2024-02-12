class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> frequency;

        for(int num : arr)
                frequency[num]++;

        unordered_set<int>storage;
        for(auto key : frequency)
            storage.insert(key.second);

        return frequency.size()== storage.size();
    }
};