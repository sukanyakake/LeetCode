class Solution {
public:
    int findBits(int i){
        int count=0;
        while(i>0){
            if(i%2!=0)    count+=1;
            i=i/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=findBits(i);
        }
        return ans;
    }

};