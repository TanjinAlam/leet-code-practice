class Solution {
public:
    string unicode_to_utf8(int unicode);
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t) ? true : false;
    }
};