class Solution {
public:
    bool sumFour(int x,int &sum){
        int count=2;
        int s=x+1;
        for(int i=2;i*i<=x;i++){
            if(x%i==0 && i*i!=x) {
                s+=i;
                s+=(x/i);
                count+=2;}
            else if(x%i==0){
                 count+=1;
                 s+=i;
            }
        }
        sum=s;
        if(count==4) return true;
        return false;

    }

    int sumFourDivisors(vector<int>& nums) {
        int totalsum=0;
        for(auto x:nums){
            int s=0;
            bool result=sumFour(x,s);
            if(result){
                cout<<result<< " "<<s<<endl;
                 totalsum+=s;
            }
        }
        return totalsum;
        
    }
};