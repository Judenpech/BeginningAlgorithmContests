class Solution:
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        min = 0
        max = len(nums) - 1
        while min <= max:
            mid = min + (max - min) // 2
            if nums[mid] < target:
                min = mid + 1
            elif nums[mid] > target:
                max = mid - 1
            else:
                return mid
        return -1