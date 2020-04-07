class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> storage;
        vector<string>::iterator it;
        string temp;
        for(string w : strs){
            temp = w;
            sort(temp.begin(), temp.end());
            it = find(storage.begin(), storage.end(), temp);
            if(it != storage.end()){
                res[it - storage.begin()].push_back(w);
            }
            else{
                vector<string> t;
                t.push_back(w);
                res.push_back(t);
                storage.push_back(temp);
            }
        }
        return res;
    }
};