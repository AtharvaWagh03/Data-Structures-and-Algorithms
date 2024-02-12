class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int num : arr)
                mp[num]++;

        set<int>s;
        for(auto [n,f] :mp)
            s.insert(f);

        return mp.size()== s.size();
    }
};