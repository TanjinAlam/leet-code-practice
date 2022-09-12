class Solution {
public:
    double powRec(double x, int n){
        if(n == 0)
            return 1;
        
        double res = powRec(x, n/2);
        
        if(n % 2 == 0)
            return res * res;
        else
            return res * res * x;
    }
    
    double myPow(double x, int n) {
        double ans = powRec(x, n);
        if(n < 0)
            return 1 / ans;
        else
            return ans;
    }
};