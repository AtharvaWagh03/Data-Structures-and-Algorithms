class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
            set<int> s;
            vector<int> v;

            for(int i=0;i<nums.size();i++) {
                if(s.count(nums[i])) {
                    v.push_back(nums[i]);
                }
                else {
                    s.insert(nums[i]);
                } 
            }
            return v;
    }
};