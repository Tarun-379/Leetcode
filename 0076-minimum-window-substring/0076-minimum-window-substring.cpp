class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size()>s.size()) return "";

        unordered_map<char,int> mp;
        for(char ch : t){
            mp[ch]++;
        }

        int req = t.size();
        int left = 0;
        int start = 0;
        int len = INT_MAX;

        for(int right = 0 ; right < s.size() ; right ++ ){
            if(mp[s[right]]>0) req--;
            mp[s[right]]--;

            while(req == 0){
                if(right-left+1 < len) {
                    len = right-left+1;
                    start = left;
                }

                mp[s[left]]++;
                if(mp[s[left]] > 0) req++;

                left++;
            }
        }


        if(len == INT_MAX) return "";

        return s.substr(start,len);
    }
};