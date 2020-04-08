class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator it;
        int res = 0;

        for(int n : arr){
            it = m.find(n);
            if(it == m.end()){
                m.insert(pair<int, int>(n, 1));
            } else{
                it -> second += 1;
            }
        }
        for(auto p : m){
            it = m.find(p.first + 1);
            if(it != m.end()){
                res += p.second;
            }
        }
        return res;       
    }
};