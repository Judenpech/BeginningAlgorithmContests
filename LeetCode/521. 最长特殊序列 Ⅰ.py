class Solution:
    def findLUSlength(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        lena=len(a)
        lenb=len(b)
        if lena!=lenb:
            return max(lena,lenb)
        else:
            if a==b:
                return -1
            else:
                return lena
        