class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int flag;
        for(int i=1; i<=n; i++) {
            flag = 0;

            for(int j=0; j<n; j++) {
                if(nums[j] == i) {
                    flag =1;
                    break;
                }
            }
            if(flag == 0) {
                return i;
            }
        }
        return 0;
    }
};