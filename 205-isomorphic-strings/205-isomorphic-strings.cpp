class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        map<char,char>m1;
        map<char,bool>track;
        for(int i=0; i<s.size(); i++){
            if(!m[s[i]] && !track[t[i]]){
                m[s[i]] = t[i];
                m1[t[i]] = s[i];
                track[t[i]] = true;
            }
        }
        map<char, char>::iterator itr;
        for (itr = m.begin(); itr != m.end(); ++itr) {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }
        for (itr = m1.begin(); itr != m1.end(); ++itr) {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }
        for(int i=0; i<t.size(); i++){
            if(m1[t[i]]){
                t[i] = m1[t[i]];
            }else {
                return false;
            }
        }
        cout << "ttttt"<< t << endl;
        if(s==t){
            return true;
        } else {
             return false;
        }
    }
};