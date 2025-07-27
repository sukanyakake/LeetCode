class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res="";
        while(columnNumber>0){
            columnNumber-=1;
            res= s[(columnNumber%26)]+res;
            columnNumber/=26;
        }
        return res;
    }
};