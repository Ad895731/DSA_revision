class Solution:
    def leaders(self, nums):
        ans = []
        mx = float('-inf')
        for i in range(len(nums)-1,-1,-1):
            if nums[i]>mx:
                ans.append(nums[i])
                mx = nums[i]

        ans.reverse()
        return ans