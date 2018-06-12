class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        result=0
        flag=1
        if x<0:
            flag=-1
            x=-x
        while(x!=0):
            result=result*10+x%10
            x//=10
        if result>2**31-1 or result <-2**31:
            return 0
        return result*flag

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            x = int(line);
            
            ret = Solution().reverse(x)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()