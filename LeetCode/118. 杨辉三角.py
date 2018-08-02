class Solution:
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        l=[]
        for i in range(numRows):
            t=[]
            for j in range(i+1):
                if j==0 or j==i:
                    t.append(1)
                else:
                    t.append(l[i-1][j]+l[i-1][j-1])
            l.append(t)
        return l
        