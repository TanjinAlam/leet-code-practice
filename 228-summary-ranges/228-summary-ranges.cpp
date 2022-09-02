class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector< string> vect;
         int minn = INT_MAX;
         int maxx = INT_MIN;
         if(nums.empty()){
             return vect;
         }
         else if(nums.size()==1){
               string s = "";
               s += to_string(nums[0]);
               vect.push_back(s);  
             return vect;
         }
         for(int i=0; i<nums.size()-1; i++){
             // cout << nums.size() << endl;
             // if()
             
             if(abs(abs(nums[i]) - abs(nums[i+1])) == 1){
                 minn = min(minn,nums[i]);
                 maxx = max(maxx,nums[i+1]);  
                 if((abs(abs(nums[i]) - abs(nums[i+1])) == 1) && i+2 == nums.size()){
                    string s = "";
                    s += to_string(minn);
                    s += "->";
                    s += to_string(maxx);
                    vect.push_back(s);  
                }
             } else {
                
                if(minn == INT_MAX && maxx == INT_MIN){
                    string s = "";
                    s += to_string(nums[i]);
                    vect.push_back(s); 
                    if(i+2 == nums.size()){
                       vect.push_back(to_string(nums[i+1]) );  
                    }
                } else {
                    string s = "";
                    s += to_string(minn);
                    s += "->";
                    s += to_string(maxx);
                    vect.push_back(s);  
                    minn = INT_MAX;
                    maxx = INT_MIN;
                    if((abs(abs(nums[i]) - abs(nums[i+1])) != 1) && i+2 == nums.size()){
                        vect.push_back(to_string(nums[i+1]));  
                     }
                }
               
             }
         }
        return vect;
    }
};