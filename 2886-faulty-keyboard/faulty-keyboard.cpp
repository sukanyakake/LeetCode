class Solution {
public:
    string finalString(string s) {
        string str="";
        for(auto ch:s){
            if(ch!='i'){
                str+=ch;
            }else{
                reverse(str.begin(),str.end());
            }
        }
        return str;
    }
};