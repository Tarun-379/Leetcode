class Solution {
public:
    int hammingDistance(int x, int y) {
        int ret = 0;
        int temp = x ^ y;
        while(temp!=0){
            ret+=temp&1;
            temp>>=1;
        }
        return ret;
    }
};