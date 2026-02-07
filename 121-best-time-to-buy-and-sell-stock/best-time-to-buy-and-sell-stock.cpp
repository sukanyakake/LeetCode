class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int mp=0;
        int bestBuy=0;
        int sellDay=0;
        for(int i=1;i<prices.size();i++){
            if(prices[bestBuy]<prices[i]){
                int temp=prices[i]-prices[bestBuy];
                if(mp<temp){
                    mp=temp;
                    sellDay=i;
                }
            }
            if(prices[bestBuy]>prices[i]){
                bestBuy=i;
            }
        }

        cout<<sellDay<<" "<<bestBuy;
        return mp;
    }
};