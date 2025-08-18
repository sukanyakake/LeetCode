class Solution {
public:
    bool okay(long long mid,int h,vector<int>& piles){
        long long res=0;
        for(auto p:piles){
            res+=(p+mid-1)/mid;
            if(res>h) return false;
        }
        return res<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long high=*max_element(piles.begin(),piles.end());
        long long low=1;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(okay(mid,h,piles)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            }
        return ans;
    }
};