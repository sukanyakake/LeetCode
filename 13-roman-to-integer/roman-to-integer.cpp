class Solution {
public:
    int romanToInt(string s) {
        int larger=INT_MIN;
        int res=0;
    for(int i=s.size();i>=0;i--){
        if(s[i]=='I'){
            if(larger<=1){
                larger=1;
                res+=1;
            }else{
                res-=1;
            }
        }
        else if(s[i]=='V'){
            if(larger<=5){
                larger=5;
                res+=5;
            }else{
                res-=5;
            }
        }
        else if(s[i]=='X'){
            if(larger<=10){
                larger=10;
                res+=10;
            }else{
                res-=10;
            }
        }
        else if(s[i]=='L'){
            if(larger<=50){
                larger=50;
                res+=50;
            }else{
                res-=50;
            }
        }
        else if(s[i]=='C'){
            if(larger<=100){
                larger=100;
                res+=100;
            }else{
                res-=100;
            }
        }
        else if(s[i]=='D'){
            if(larger<=500){
                larger=500;
                res+=500;
            }else{
                res-=500;
            }
        }else if(s[i]=='M'){
            if(larger<=1000){
                larger=1000;
                res+=1000;
            }else{
                res-=1000;
            }
        }
    }
    return res;

        
    }
};