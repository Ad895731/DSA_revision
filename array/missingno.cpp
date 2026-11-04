class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int j=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=i) {
        //         j=i;
        //         break;
        //         }
        // }
        // return j;
        
    }

    class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        ans =0
        for i in range (1, n+1):
            ans= ans^i
        for i in  nums:
            ans = ans^i
        return ans
        
};