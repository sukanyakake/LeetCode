class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i=0;
        int res=0;
        int size=columnTitle.size();
        while(i<size){
            int val=(columnTitle[i]-'A')+1;
            cout<<"index "<<val<<" pow ";
            int power=pow(26,(size-i-1));
            cout<<power<<" ";
            cout<<"  prev res "<<res;
            res=res+(pow(26,(size-i-1))*val);
            cout<<" "<<res<<endl;
            i++;
        }
        return res;
        
    }
};