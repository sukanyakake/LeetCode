class Solution {
public:
    bool isValid(string s) {
        stack<char> can;
        map<char,char> m;
        m['(']=')';
        m['{']='}';
        m['[']=']';
        can.push('k');
        for(auto ch:s){
            char t=can.top();
            if(m[t]==ch){
                can.pop();
            }else{
                can.push(ch);
            }
        }
        if(can.top()=='k'){
            return true;
        }
        return false;
    }
};