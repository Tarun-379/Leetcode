class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.size();
        vector<int> bounds;
        for(int i = 0 ; i < s.size() ; i++ ){
            if(s[i]!=' ' and (i==0 or (s[i-1]==' '))) bounds.push_back(i);
            if(s[i]!=' ' and (i==n-1 or (s[i+1]==' '))) bounds.push_back(i);
        }
        for(int i = bounds.size()-2 ; i >= 0 ; i-=2){
            ans += s.substr(bounds[i],bounds[i+1]-bounds[i]+1);
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};