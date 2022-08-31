class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector< pair <int,int> > vect;
        for(int i=0; i<nums.size(); i++){
            vect.push_back( make_pair (nums[i],i) );
        }
        sort(vect.begin(), vect.end());
        for(int i=0; i<vect.size()-1; i++){
            if(vect[i].first == vect[i+1].first && abs(vect[i].second - vect[i+1].second) <= k){
                cout << vect[i].first << "     " << vect[i+1].first << endl;
                return true;
            }
        }
        return false;
    }
};