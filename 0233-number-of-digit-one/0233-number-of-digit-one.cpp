class Solution {
public:
    int countDigitOne(int n) {
        long long ret = 0;

        long long strength = 1;
        long long block = 10;

        while(strength <= n){
            long long temp = (n/strength)%10;

            if(temp > 1) ret+= strength * ((n/block)+1);
            else if(temp < 1) ret+= strength * (n/block);
            else ret+= (strength * (n/block)) + ((n % strength) +1);

            strength*=10;
            block*=10;
        }

        return ret;
    }
};