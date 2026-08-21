class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int n = nums.size();
        if(n==0) return 0;
        int longest = 1, count  = 0, last = INT_MIN;

        for(int i=0; i<n; i++) {
            
            if(nums[i]==last) {
                continue;
            }
            else if(nums[i]-1 == last) {
                count++;
                last = nums[i];
            }
            else if(nums[i]-1 != last) {
                count = 1;
                last = nums[i];
            }
            longest = max(longest, count);
        }

        return longest;
    }
};