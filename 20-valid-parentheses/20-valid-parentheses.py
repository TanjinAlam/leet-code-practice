class Solution(object):
    def isValid(self, s):
        arr = []
        arr.append(s[0])
        s = s[1:]
        for i in range(len(s)):
            if len(arr) != 0 and arr[-1] == "(" and s[i] == ')':
                arr.pop()
            elif len(arr) != 0 and arr[-1] == "{" and s[i] == '}':
                arr.pop()
            elif len(arr) != 0 and arr[-1] == "[" and s[i] == ']':
                arr.pop()
            else:
                arr.append(s[i])
        if (len(arr) == 0):
            return True
        else:
            return False

        