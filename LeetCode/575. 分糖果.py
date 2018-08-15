class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        candy = len(set(candies))
        half = len(candies) // 2
        if candy < half:
            return candy
        else:
            return half
        