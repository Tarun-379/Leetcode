class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ret = 0;
        int x = start^goal;
        while(x!=0){
            ret+=x&1;
            x>>=1;
        }
        return ret;
    }
};