class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j=0; j<i+1; j++){
                sum += nums[j];
            };
            cout << sum << endl;
            v.push_back(sum);
        };
        return v;   
    }    
};