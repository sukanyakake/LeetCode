class Solution {
public:
    double myPow(double x, int num) {
        if(num==0) return 1;
        if(x==1.0) return 1;
        if(x==-1.0 && num%2==0) return 1;
        if(x==-1 && num%2!=0) return -1; 
        double ans=1.0;
        long long n=num;
        if(n<0){
            n=(-1)*n;
            x=1/x;
        }
        while(n>0){
            if(n%2==1) ans=ans*x;
            x=x*x;
            n=n/2;
        }
        return ans;
    }
};