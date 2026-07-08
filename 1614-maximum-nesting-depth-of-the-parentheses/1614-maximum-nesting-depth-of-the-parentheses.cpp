class Solution {
public:
    int maxDepth(string s) {
        int ret = 0;
        int temp = 0;
        for(char ch : s){
            if(ch=='(') temp++;
            if(ch==')') temp--;
            ret = max(ret,temp);
        }
        return ret;
    }
};