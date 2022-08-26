class Solution(object):
    def longestCommonPrefix(self, strs):
        res =[]
        for i,x in enumerate(min(strs, key=len)):
            if all(x in word[i] for word in strs):
                res.append(x)
            else:
                break
        return ''.join(res)