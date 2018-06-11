#暴力法
class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n=len(nums)
        for i in range(n):
            for j in range(i+1,n):
                if nums[i]+nums[j]==target:
                    return i,j
                    break
 

# 一遍哈希       
class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n=len(nums)
        d={}
        for i in range(n):
            t=target-nums[i]
            if nums[i] in d:
                return d[nums[i]],i
            else:
                d[t]=i