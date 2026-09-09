class Solution {
public:
    char processStr(string s, long long k) {

        long long retlen = 0;
        for(int i = 0 ; i < s.size() ; i ++ ){
            if(s[i] == '*') {
                if(retlen>0) retlen--;
            }
            else if(s[i] == '#') retlen*=2;
            else if(s[i] == '%') continue;
            else retlen++;
        }
        if(k>=retlen) return '.';

        for(int i = s.size()-1 ; i >= 0 ; i -- ){
            if(s[i]=='#'){
                if(k >= retlen/2) k-=retlen/2;
                retlen/=2;
            }
            else if(s[i]=='%'){
                k = retlen-k-1;
            }
            else if(s[i]=='*') {
                retlen++;
            }
            else {
                if(retlen-1==k) return s[i];
                retlen--;
            }
        }

        return '.';
    }
};