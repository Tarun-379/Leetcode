class Solution {
public:
    bool checkString(string s) {
        int ret = 0;
        int a = 0;
        for(char ch : s){
            if(ch == 'a') ret+=a;
            if(ch == 'b') a = 1;
        }
        if(ret == 0) return true;
        return false;
    }
};