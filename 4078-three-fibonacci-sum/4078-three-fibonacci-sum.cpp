class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2==1) return false;
        int first = 0;
        int second = 1;
        while(second <= n/2){
            if(second == n/2) return true;
            second = first + second;
            first = second-first;
        }
        return false;
    }
};