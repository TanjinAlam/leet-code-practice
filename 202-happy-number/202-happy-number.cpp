class Solution {
public:
    int squareSum(int n){
        int ans = 0;
        while(n){
            int temp = n%10;
            ans += (temp*temp);
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
       int assumption = 0;
       map<int,bool> seen;
       while(n!=1){
            n = squareSum(n); 
            if(!seen[n]){
                 seen[n] = true;
            } else {
                return false;
            }
        }
       return true;
    }
};