class Solution(object):
    def romanToInt(self, s):
        roman_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        ln = len(s)
        if(ln ==1):
            sum = roman_map[s[0]]
            st = 1
        elif(roman_map[s[0]] >  roman_map[s[1]]):
            sum = roman_map[s[0]]
            st = 1
        elif (roman_map[s[0]] <  roman_map[s[1]]) : 
            sum = roman_map[s[1]] - roman_map[s[0]]
            st = 2
        else:
            sum = roman_map[s[0]]
            st = 1
        # Loop for each character from right to left
        for i in range(st,ln):
            # Check if the character at right of current character is bigger or smaller
            if(i+1 == ln):
                sum += roman_map[s[i]]
            elif roman_map[s[i]] >= roman_map[s[i+1]]:
                sum += roman_map[s[i]]
            else:
                sum -= roman_map[s[i]]
        return sum