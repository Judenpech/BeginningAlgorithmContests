class Solution:
    def shortestToChar(self, S, C):
        """
        :type S: str
        :type C: str
        :rtype: List[int]
        """
        ret=[]
        lens=len(S)
        for i in range(lens):
            right=S.find(C,i)
            if right==-1:
                right=100002
            else:
                right-=i
            left=S[:i+1].rfind(C)
            if left==-1:
                left=100002
            else:
                left=i-left
            ret.append(min(right,left))
        return ret
        