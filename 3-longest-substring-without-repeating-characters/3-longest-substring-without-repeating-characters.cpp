class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int leftP = 0;
            int maxValue = 0;
            map< char, int> mp;
            for(int i=0; i<s.size(); i++){

                if(mp[s[i]] && leftP <= mp[s[i]] ){
                    leftP = mp[s[i]];
                }
                mp[s[i]] = i + 1;
                maxValue= max(1+i - leftP, maxValue);

            }
        return maxValue;
    }
};