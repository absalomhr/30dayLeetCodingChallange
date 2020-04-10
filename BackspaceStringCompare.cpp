class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int bs1 = 0, bs2 = 0;
        int i1 = S.size() - 1, i2 = T.size() - 1;
        char c1 = '0', c2 = '0';
        while(true){
            while(i1 >= 0){
                if(S[i1] == '#'){
                    bs1++;
                    i1--;
                } else{
                    if(bs1 > 0){
                        while(bs1 > 0 && i1 >= 0){
                            if(S[i1] == '#'){
                                bs1++;
                            }else{
                                bs1--;
                            }
                            i1--;
                        }
                    } else{
                        c1 = S[i1];
                        i1--;
                        break;
                    }
                }
            }
            while(i2 >= 0){
                if(T[i2] == '#'){
                    bs2++;
                    i2--;
                } else{
                    if(bs2 > 0){
                        while(bs2 > 0 && i2 >= 0){
                                if(T[i2] == '#'){
                                    bs2++;
                                }else{
                                    bs2--;
                                }
                                i2--;
                        }
                    } else{
                        c2 = T[i2];
                        i2--;
                        break;
                    }
                }
            }
            if(c1 != c2){
                return false;
            }
            if(i1 <= 0 && i2 <= 0){
                if(i1 == i2)
                    return true;
                else
                    if(S[0] != T[0])
                        return true;
                    else
                        return false;
            }
        }
    }
};