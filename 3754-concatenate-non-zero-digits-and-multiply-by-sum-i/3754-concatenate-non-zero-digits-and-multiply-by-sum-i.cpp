class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        long long res = 0;
        int i = 0;
        while(n){
            int temp = n%10;
            n/=10;
            sum+=temp;
            if(temp!=0) {
                temp*=pow(10,i);
                res+=temp;
                i++;
            }
        }
        return sum*res;
    }
};