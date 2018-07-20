class Solution:
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        binaryStr = ""
        while n != 0:
            binaryStr = binaryStr + str(n % 2)
            n = n // 2
        lens = len(binaryStr)
        for i in range(lens - 1):
            if binaryStr[i] == binaryStr[i + 1]:
                return False
        return True
