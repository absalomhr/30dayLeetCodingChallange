class Solution {
public:
    
    void right(string & s){
        char c = s[size(s) - 1];
        int i = size(s) - 1;
        while(i > 0){
            s[i] = s[i - 1];
            i--;
        }
        s[0] = c;
    }
    
    void left(string & s){
        char c = s[0];
        int i = 0;
        while(i < s.size()){
            s[i] = s[i + 1];
            i++;
        }
        s[s.size() - 1] = c;
    }    
        
    void shiftStr(string & s, int n, bool wrd){
        while(n > 0){
            if(wrd)
                right(s);
            else
                left(s);
            n--;
        }
    }
    
    string stringShift(string s, vector<vector<int>>& shift) {
        int n_shift = 0;
        for(vector<int> v : shift){
            v[0] == 0 ? n_shift -= v[1] : n_shift += v[1];
        }
        //cout << n_shift << endl;
        if(n_shift == 0)
            return s;
        else{
            if(n_shift > 0)
                shiftStr(s, n_shift, true);
            else
                shiftStr(s, abs(n_shift), false);
            return s;
        }
    }
};