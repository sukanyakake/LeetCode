class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i=0;
        int res=0;
        int size=columnTitle.size();
        while(i<size){
            int val=(columnTitle[i]-'A')+1;
            res=res+(pow(26,(size-i-1))*val);
            i++;
        }
        return res;
        
    }
};