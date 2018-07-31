class Solution:
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        while num>=10:
            t=num
            ssum=0
            while t!=0:
                ssum+=t%10
                t//=10
            num=ssum
        return num
        