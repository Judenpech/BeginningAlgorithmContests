class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        lens=len(nums)
        ssum=0
        for i in range(0,lens,2):
            mmin=min(nums[i],nums[i+1])
            ssum+=mmin
        return ssum