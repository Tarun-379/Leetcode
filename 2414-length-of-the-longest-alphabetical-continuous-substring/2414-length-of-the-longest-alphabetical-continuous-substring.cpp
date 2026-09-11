class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ret = 1;

        int curr =1;
        for(int right = 0 ; right < s.size()-1 ; right ++){
            if(s[right]+1 == s[right+1]) curr++;
            else curr = 1;
            ret = max(ret,curr);
        }

        return ret;
    }
};