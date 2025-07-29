class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size();
        while(i<j){
            while(i<s.size() && not((s[i]>=65 && s[i]<=90) or (s[i]<=122 && s[i]>=97))){
                i++;
            }
             while(j>=0 && not((s[j]>=65 && s[j]<=90) or (s[j]<=122 && s[j]>=97))){
                j--;
            }
            if(i<j){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;j--;
            }
        }
        return s;
    }
};