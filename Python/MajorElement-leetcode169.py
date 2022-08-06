
class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        nums.sort()
        # Now that the list is sorted, the majority element is a index [n/2] or [n/2] - 1 if the list len is even
        return nums[len(nums)//2]

#sort() cost O(nlogn) in Python

#Boyer-Moore: Linear time and O(1) space
class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        count = 0
        for value in nums:
            if (count == 0):
                res = value
            count += 1 if value == res else -1