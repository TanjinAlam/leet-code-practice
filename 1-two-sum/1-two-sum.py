class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        store = {}
        for i in range(len(nums)):
            val = nums[i]
            dif = target - val
            if dif in store:
                return store[dif],i
            else:
                store[val] = i
            