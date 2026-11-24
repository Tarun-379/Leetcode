class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        isPrime[0]=isPrime[1]=false;

        for(int i = 2 ; i*i <=n ; i ++ ){
            if(isPrime[i]){
                int temp = i*i;
                while(temp<=n){
                    isPrime[temp] = false;
                    temp+=i;
                }
            }
        }



        int ret = 0;
        for(int i = 0 ; i < n ; i ++ ){
            if(isPrime[i]) ret++;
        }
        return ret;
    }
};