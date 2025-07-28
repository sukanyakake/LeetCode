class Solution {
public:
    string fizbuz(int n){
        if(n%3==0 and n%5==0){
            return "FizzBuzz";
        }else if(n%3==0){
            return "Fizz";
        }else if(n%5==0){
            return "Buzz";
        }else{
            return to_string(n);
        }
    }
    vector<string> fizzBuzz(int m) {
        vector<string> res;
        for (int n=1;n<=m;n++){
           res.push_back(fizbuz(n));
        }
        return res;
    }
};