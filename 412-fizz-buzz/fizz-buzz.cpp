class Solution {
public:
    vector<string> fizzBuzz(int m) {
        vector<string> res;
        for (int n=1;n<=m;n++){
            if(n%3==0 and n%5==0){
            res.push_back("FizzBuzz");
        }else if(n%3==0){
            res.push_back("Fizz");
        }else if(n%5==0){
            res.push_back("Buzz");
        }else{
            res.push_back(to_string(n));
        }
        }
        return res;
    }
};