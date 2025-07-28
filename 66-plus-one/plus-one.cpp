class Solution {
public:

    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int sum=0;
        for(int i=digits.size()-1;i>=0;i--){
            sum=digits[i]+carry;
            carry=sum/10;
            digits[i]=sum%10;
            if(carry==0) break;
        }
        if(carry==1) digits.insert(digits.begin(),carry);

        return digits;
    }
};