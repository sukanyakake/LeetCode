class Solution {
public:
    bool isValid(string str) {
        map<char,char> m;
        stack<char> s;
        m[')']='(';
        m['}']='{';
        m[']']='[';
        for(auto k:str){
            if(k=='{' || k=='[' || k=='(' ){
                s.push(k);
            }else{
                if(s.empty()||s.top()!=m[k]){
                    return false;
                }
                s.pop();
            }
        }
            return s.empty();

    }
};