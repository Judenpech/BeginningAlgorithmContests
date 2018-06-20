class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        a=bin(num)[2:]
        re=""
        for i in a:
            if i=="1":
                re+="0"
            else:
                re+="1"
        return int(re,2)

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            num = int(line);
            
            ret = Solution().findComplement(num)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()