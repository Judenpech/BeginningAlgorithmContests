class Solution:
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        import math
        cnt = 0
        lens = len(s)
        for c in s:
            cnt += (ord(c) - 64) *int(math.pow(26,lens-1))
            lens-=1
        return cnt