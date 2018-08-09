class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        lens=len(nums)
        t=0
        for i in range(lens):
           t^=nums[i]
        return t