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
        for(int i=0; i<1000; i++){
            n = squareSum(n); 
            cout << n << endl;
            if(n == 1){
                return 1;
            }
        }
        return false;
        
    }
};