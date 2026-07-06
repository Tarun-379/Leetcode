class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int gate = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                if(gate!=0) ans+=s[i];
                gate++;
            }
            if(s[i]==')'){
                gate--;
                if(gate!=0) ans+=s[i];
            }
        }
        return ans;
    }
};