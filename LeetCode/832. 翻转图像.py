class Solution:
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        for i in A:
            i.reverse()
            for j in range(len(i)):
                if i[j]==0:
                    i[j]=1
                else:
                    i[j]=0
        return A

