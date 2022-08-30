class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // unordered_map<char,string>patternMp;
        unordered_map<char, string> patternMp;
        unordered_map<string, bool>track;
        stringstream ss(s);
        // To store individual words
        string Word;
        vector<string> splitString;
        while (ss >> Word){
            splitString.push_back(Word);
        }
        if(pattern.size() != splitString.size()){
            return false;
        }
        for(int i=0; i<pattern.size(); i++){
            cout << pattern[i] << "   " << patternMp[pattern[i]] << "    " << splitString[i] << track[splitString[i]] << endl;
            
            if((patternMp[pattern[i]] == "" || patternMp[pattern[i]] == " ") && !track[splitString[i]] ){
                
                patternMp[pattern[i]] = splitString[i];
                
                track[splitString[i]] = true;
                cout << pattern[i] << "   " << patternMp[pattern[i]] << "    " << splitString[i] << endl;

            } 
            else if(patternMp[pattern[i]] != splitString[i]) {
                cout << patternMp[pattern[i]] << splitString[i] << endl;
                return false;
            } else {
                cout << "HI" << endl;
            }
        }
        
        return true;
    }
};