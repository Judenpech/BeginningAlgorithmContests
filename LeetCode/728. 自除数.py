class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        l=[]
        for i in range(left,right+1):
            flag=1
            for n in str(i):
                if n=='0':
                    flag=0
                    break
                if i%int(n)!=0:
                    flag=0
                    break
            if flag:
                l.append(i)
        return l
        