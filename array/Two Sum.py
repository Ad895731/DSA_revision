class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}                     # number -> uska index

        for i in range(len(nums)):
            need = target - nums[i]   # jo number chahiye

            if need in seen:          # pehle dekh chuke hain?
                return [seen[need], i]

            seen[nums[i]] = i 