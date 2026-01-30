class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
         for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j+=1;
            }
         }
         return j;
    }
};