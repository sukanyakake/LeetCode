class Solution {
public:
    bool okay(long long mid,int h,vector<int> piles){
        long long res=0;
        for(int i=0;i<piles.size();i++){
            res+=ceil(piles[i]/double(mid));
        }
        if(res<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long high=accumulate(piles.begin(),piles.end(),0ll);
        long long low=1;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            bool z=okay(mid,h,piles);
            if(z){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            }
        return ans;
    }
};