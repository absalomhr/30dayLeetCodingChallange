class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nxt = 0;
        for(int n : nums){
            if(n != 0){
                nums[nxt] = n;
                nxt++;
            }
        }
        for(int i = nxt; i < size(nums); i++){
            nums[i] = 0;
        }
    }
};