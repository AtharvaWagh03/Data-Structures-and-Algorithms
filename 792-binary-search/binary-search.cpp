class Solution {
public:
    int binarySearch(vector<int>& nums,int k,int s,int e){
        if(s>e)
            return -1;

        int mid= s + (e-s)/2;

        if(nums[mid]==k)
            return mid;

        if(nums[mid]<k){
            return binarySearch(nums,k,mid+1,e);
        }
        else{
            return binarySearch(nums,k,s,mid-1);
        }
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,target,0,nums.size()-1);
    }
};