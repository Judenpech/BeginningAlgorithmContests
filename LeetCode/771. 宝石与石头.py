class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        cnt=0
        for c in S:
            if c in J:
                cnt+=1
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
            J = stringToString(line);
            line = next(lines)
            S = stringToString(line);
            
            ret = Solution().numJewelsInStones(J, S)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()