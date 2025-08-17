class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int n=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<0){
                low=mid+1;
            }else {
                high=mid-1;
            }
        }
        if(low<n && nums[low]==0){
            int c=low+1;
            int count=1;
            while(c<n && nums[c]==0){
                count++;
                c++;
            }
            return max(low,n-low-count);

        }else{
            return max(low,n-low);
        }
    }
};