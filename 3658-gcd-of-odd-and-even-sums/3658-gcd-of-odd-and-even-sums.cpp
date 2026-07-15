class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n; 
        int even = n*(n+1);
        int gcd = 1;
        for(int i = 2 ; i <= odd/2 ; i++ ){
            if (odd%i==0 and even%i==0) gcd = i;
        }
        return gcd;
    }
};