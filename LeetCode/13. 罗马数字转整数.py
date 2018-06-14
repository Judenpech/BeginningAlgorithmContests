class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        d={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        cnt=0
        lens=len(s)
        i=0
        while(i<lens):
            if s[i]=='I' and i+1<lens:
                if s[i+1]=='V':
                    cnt+=4
                    i+=1
                elif s[i+1]=='X':
                    cnt+=9
                    i+=1
                else:
                    cnt+=d[s[i]]
            elif s[i]=='X' and i+1<lens:
                if s[i+1]=='L':
                    cnt+=40
                    i+=1
                elif s[i+1]=='C':
                    cnt+=90
                    i+=1
                else:
                    cnt+=d[s[i]]
            elif s[i]=='C' and i+1<lens:
                if s[i+1]=='D':
                    cnt+=400
                    i+=1
                elif s[i+1]=='M' and i+1<lens:
                    cnt+=900
                    i+=1
                else:
                    cnt+=d[s[i]]
            else:
                    cnt+=d[s[i]]
            i+=1
        return cnt

def stringToString(input):
    return input[1:-1].decode('string_escape')

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            s = stringToString(line);
            
            ret = Solution().romanToInt(s)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()