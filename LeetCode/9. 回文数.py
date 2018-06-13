#转换成字符串比较
class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        length=len(str(x))
        s=str(x)
        for i in range(length//2):
            if s[i]!=s[length-i-1]:
                return False
        return True

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
            
            ret = Solution().isPalindrome(x)

            out = (ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()

#反转一半数字
class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0 or (x%10==0 and x!=0):
            return False
        rev=0
        while(rev<x):
            rev=rev*10+x%10
            x//=10
        if rev==x or rev//10==x:
            return True
        else:
            return False

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
            
            ret = Solution().isPalindrome(x)

            out = (ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()