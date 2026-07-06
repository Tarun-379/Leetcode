class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        if (first == last) return first;
        for(int i = 0 ; i < max(first.size(),last.size()) ; i ++ ){
            if (first[i] != last[i]) return first.substr(0,i);
        }
        return "";
    }
};