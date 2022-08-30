class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        map<char,bool>track;
        for(int i=0; i<s.size(); i++){
            if(!m[s[i]] && !track[t[i]]){
                m[s[i]] = t[i];
                track[t[i]] = true;
            } else if(m[s[i]] != t[i]){
                return false;
            }
        }
        return true;
    }
};