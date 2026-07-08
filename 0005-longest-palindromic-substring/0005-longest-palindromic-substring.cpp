class Solution {
public:
    string longestPalindrome(string s) {
        pair<int,int> ls = {0,0};
        for(int i = 0 ; i < s.size() ; i ++ ){
            pair<int,int> temp = {i,i};
            if(ls.second-ls.first < temp.second-temp.first) ls = temp;
            int l = i-1;
            int r = i+1;
            while(l>=0 and r<s.size()){
                if(s[l]==s[r]) temp = {l,r};
                else break;
                l--;
                r++;
                if(ls.second-ls.first < temp.second-temp.first) ls = temp;
            }
            if(i+1<s.size()){
                if(s[i]!=s[i+1]) continue;
                pair<int,int> temp2 = {i,i+1};
                if(ls.second-ls.first < temp2.second-temp2.first) ls = temp2;
                int p = i-1;
                int q = i+2;
                while(p>=0 and q<s.size()){
                    if(s[p]==s[q]) temp2 = {p,q};
                    else break;
                    p--;
                    q++;
                    if(ls.second-ls.first < temp2.second-temp2.first) ls = temp2;
                }
            }
        }
        return s.substr(ls.first,ls.second-ls.first+1);
    }
};