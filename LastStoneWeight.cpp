class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1)
            return stones[0];
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            printv(stones);
            int sto1 = stones[stones.size() - 1];
            int sto2 = stones[stones.size() - 2];
            if(sto1 == sto2){
                cout << "if" << endl;
                stones.pop_back();
                stones.pop_back();
            } else {
                cout << "else" << endl;
                int temp = sto1 - sto2;
                stones.pop_back();
                stones.pop_back();
                stones.push_back(temp);
            }
        }
        if(stones.size() > 0){
            cout << "if end" << endl;
            return stones[0];
        }
        else{
            cout << "else end" << endl;
            return 0;
        }
    }
    void printv(vector<int>& v){
        for(int e : v){
            cout << e << " ";
        }
        cout << endl;
    }
};