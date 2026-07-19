class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        bool s;
        if((start[0]+start[1]) % 2 == 0) s = true;
        else s = false;
        
        bool t;
        if((target[0]+target[1]) % 2 == 0) t = true;
        else t = false;
        
        if(s==t) return true;
        return false;
    }
};