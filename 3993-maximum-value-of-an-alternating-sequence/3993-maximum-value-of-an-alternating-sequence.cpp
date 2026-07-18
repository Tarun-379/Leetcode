class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        if(n%2!=0) n--;
        long long ret = s;
        ret+=((long long)(n/2)*m);
        ret-=((n/2)-1);
        return ret;
    }
};