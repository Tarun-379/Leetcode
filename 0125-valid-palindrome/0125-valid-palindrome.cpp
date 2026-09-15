class Solution {
public:
    bool isPalindrome(string s) {
        string ret;
        for (auto c : s){
            if(c>='a' and c<='z') ret+=c;
            else if (c>='A' and c<='Z'){
                ret+=c-('A'-'a');
            }
            else if (c>='0' and c<='9') ret+=c;
        }
        if(ret=="")return true;
        for(int i = 0 ; i < ret.size()/2 ; i ++){
            if(ret[i]!=ret[ret.size()-1-i]) return false;
        }
        return true;
    }
};