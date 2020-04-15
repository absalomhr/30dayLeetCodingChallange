class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        d = {}   
        curr_sum = 0 
        max_len = 0 
        for i in range (len(nums)):  
            curr_sum = curr_sum + 1 if nums[i] == 1 else curr_sum - 1 
            if curr_sum == 0:
                    max_len = i+1
            if curr_sum in d: 
                max_len = max(max_len, i - d[curr_sum])
            else:
                d[curr_sum] = i   
        return max_len