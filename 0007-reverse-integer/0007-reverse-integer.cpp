class Solution {
public:
    int reverse(int x) {
        long long ret = 0;
        while(x){
            ret*=10;
            ret+=x%10;
            x/=10;
            if(ret>=INT_MAX or ret<=INT_MIN) return 0;
        }
        return ret;
    }
};