class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        l=s.split()
        ll=[]
        for i in l:
            ll.append(i[-1::-1])
        retn=" ".join(ll)
        return retn
        
        