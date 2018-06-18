class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        #异或运算：同0异1
        return str(bin(x^y)).count('1')

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
            line = next(lines)
            y = int(line);
            
            ret = Solution().hammingDistance(x, y)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()