class Solution {
public:
    string reverseVowels(string str) {
        string s="";
        if(str.size()<2){
            return str;
        }

        for(char ch:str){
            if(ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U' or ch=='a' or ch=='e' or ch=='i' or  ch=='o'  or  ch=='u'){
                s+=ch;
            }
        }
        reverse(s.begin(),s.end());
        int j=0;
        for(int i=0;i<str.size();i++){
            char ch=str[i];
            if(ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U' or ch=='a' or ch=='e' or ch=='i' or  ch=='o'  or  ch=='u'){
                str[i]=s[j];
                j++;
            }
        }
        return str;
    }
};