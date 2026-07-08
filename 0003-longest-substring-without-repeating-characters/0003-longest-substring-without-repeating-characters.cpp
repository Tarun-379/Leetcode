class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret = 0;
        map <char,int> mp;
        int curr = 0;
        int indstrt = 0;
        for (int i = 0 ; i < s.size() ; i ++ ){
            if (mp.count(s[i]) and mp[s[i]] >= indstrt){
                indstrt = mp[s[i]]+1;
                curr = i - indstrt +1;
                mp[s[i]] = i;
            }
            else{
                mp[s[i]] = i;
                curr ++;
            }
            ret = max(curr,ret);
        }
        return ret;
    }
};