class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=1,high=nums.size()-2;
        if(high==-1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[high+1]>nums[high]) return high+1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1]) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};