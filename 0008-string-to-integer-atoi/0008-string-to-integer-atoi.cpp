class Solution {
public:
    int myAtoi(string s) {
        int t = 0;
        for (char ch : s){
            if(ch != ' ') break;
            t++;
        }
        if(t==s.size()) return 0;

        int sign;
        if(s[t]=='-') sign = -1;
        else sign = 1;

        long long ret = 0;
        int i;
        bool out = false;
        for(i = t ; i < s.size() ; i ++ ){
            if (i==t and (s[i]=='+' or s[i]=='-')) continue;
            if (s[i]<='9' and s[i]>='0'){
                if (((ret*10)+(s[i]-'0'))*sign <= INT_MIN) {
                    ret = INT_MIN;
                    out = true;
                    break;
                }
                else if ((ret*10)+(s[i]-'0') > INT_MAX) {
                    ret = INT_MAX;
                    out = true;
                    break;
                }
                
                ret*=10;
                ret+=s[i]-'0';
            }
            else break;
        }
        if(!out) return ret*sign;
        return ret;
    }
};