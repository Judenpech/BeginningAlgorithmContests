class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        s1 = "QWERTYUIOP"
        s2 = "ASDFGHJKL"
        s3 = "ZXCVBNM"
        ret=[]
        for w in words:
            ww = w.upper()
            cnt1=0
            cnt2=0
            cnt3=0
            for c in ww:
                if c in s1:
                    cnt1+=1
            if cnt1==len(w):
                ret.append(w)
            for c in ww:
                if c in s2:
                    cnt2+=1
            if cnt2==len(w):
                ret.append(w)
            for c in ww:
                if c in s3:
                    cnt3+=1
            if cnt3==len(w):
                ret.append(w)
        return (ret)
        