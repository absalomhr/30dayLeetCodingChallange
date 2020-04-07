class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = nums[0];
        for(int i = 1; i < size(nums); i++){
            x ^= nums[i];
        }
        return x;
    }
};