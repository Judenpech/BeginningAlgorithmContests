class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        cntR=moves.count("R")
        cntL=moves.count("L")
        cntU=moves.count("U")
        cntD=moves.count("D")
        if cntR==cntL and cntU==cntD:
            return True
        else:
            return False

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
            moves = stringToString(line);
            
            ret = Solution().judgeCircle(moves)

            out = (ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()