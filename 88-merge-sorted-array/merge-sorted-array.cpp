class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int> nums3;

        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                k++;
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                k++;
                j++;
            }
        }
        while(i<m){
            nums3.push_back(nums1[i]);
            k++;
            i++;
        }
        while(j<n){
            nums3.push_back(nums2[j]);
            k++;
            j++;
        }
        nums1=nums3;
    }
};