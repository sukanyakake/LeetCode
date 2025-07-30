class Solution {
public:
    string convertToBase7(int num) {
        int n=abs(num);
        if(num==0) return "0";
        string s="";
        while(n>0){
            s=to_string(n%7)+s;
            n/=7;
        }
        if(num<0) return "-"+s;
        return s;
    }
};