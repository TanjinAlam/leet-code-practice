class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v;
        int allSum = 0;
        for(int i=0; i<nums.size(); i++){
            allSum += nums[i];
        }
        int tempSum = 0;
        for(int j=0; j<nums.size(); j++){
            if(tempSum == (allSum - nums[j] - tempSum)){
                return j;
            }
            tempSum += nums[j];
        }
        return -1;
    }
};