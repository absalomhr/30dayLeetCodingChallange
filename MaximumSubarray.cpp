class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN, a = 0;
        for(int n : nums){
            a += n;
            if(sum < a)
                sum = a;
            if(a < 0)
                a = 0;
        }
        return sum;
    }
};