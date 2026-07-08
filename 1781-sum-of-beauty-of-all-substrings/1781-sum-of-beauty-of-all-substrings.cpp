class Solution {
public:
    int beautySum(string s) {
        int ret = 0;
        for (int i = 0 ; i < s.size() ; i ++ ){
            vector<int> counter (26,0);
            for(int j = i ; j < s.size() ; j ++ ){
                counter[s[j]-'a']++;
                int max = 0;
                int min = counter[s[j]-'a'];
                for(int x : counter){
                    if (x>max) max = x;
                    if(x<min and x>0) min = x;
                }
                ret+=max-min;
            }
        }
        return ret;
    }
};