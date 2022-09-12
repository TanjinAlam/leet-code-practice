class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        vector<vector<string>> res;
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(s);
        }
        for(auto it : m){
            res.push_back(it.second);
        }
        return res;
    }
};