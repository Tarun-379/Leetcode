class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int> out;
        int gate = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                if(gate==0) out.push_back(i);
                gate++;
            }
            if(s[i]==')'){
                gate--;
                if(gate==0) out.push_back(i);
            }
        }
        reverse(out.begin(),out.end());
        for(int i : out) s.erase(i,1);
        return s;
    }
};