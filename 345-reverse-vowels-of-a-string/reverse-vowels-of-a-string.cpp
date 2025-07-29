class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(i<s.size() && not(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='a' or s[i]=='e' or s[i]=='i' or  s[i]=='o'  or  s[i]=='u')){
            i++;
            }
            while(j>=0  && not(s[j]=='A' or s[j]=='E' or s[j]=='I' or s[j]=='O' or s[j]=='U' or s[j]=='a' or s[j]=='e' or s[j]=='i' or  s[j]=='o'  or  s[j]=='u')){
            j--;
            }
            if(i<j) {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;j--;
            }
        }
        return s;
    }
};