class Solution {
    int get_sum(int n){
        int sum = 0;
        while(n){
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set <int> os;
        while(true){
            if(n == 1){
                return true;
            }
            
            n = get_sum(n);
            
            if(os.count(n) == 1){
                return false;
            }   
            
            os.insert(n);
            
        }
    }
};