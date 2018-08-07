class Solution:
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        rr = len(nums)
        cc = len(nums[0])
        retl = []
        if rr * cc < r * c:
            return nums
        else:
            t = []
            for i in range(rr):
                for j in range(cc):
                    t.append(nums[i][j])
            m = 0
            for i in range(r):
                retl.append(t[m:m + c])
                m += c
        return retl