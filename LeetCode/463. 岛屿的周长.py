class Solution:
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        cnt = 0
        neighbor = 0
        lstLen = len(grid)
        for i in range(lstLen):
            cnt += grid[i].count(1)
        for i in range(0, lstLen):
            lens = len(grid[i])
            for j in range(lens):
                b = grid[i][j]
                if j != 0:
                    a = grid[i][j - 1]
                    if a == 1 and b == 1 and a == b:
                        neighbor += 1
                if i != lstLen - 1:
                    c = grid[i + 1][j]
                    if b == 1 and c == 1 and b == c:
                        neighbor += 1
        cnt = cnt * 4 - neighbor * 2
        return cnt
        