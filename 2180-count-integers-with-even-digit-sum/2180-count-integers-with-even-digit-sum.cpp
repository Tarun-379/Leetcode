class Solution {
public:
    int countEven(int num) {
        int ret = 0;
        for(int i = 1 ; i <= num ; i ++ ){
            int temp = 0 ;
            int n = i;
            while(n){
                temp+=n%10;
                n/=10;
            }
            if (temp%2==0) ret++;
        }
        return ret;
    }
};