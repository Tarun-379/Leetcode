class Solution {
public:
    int fib(int n) {
        if (n<=1){
            return n;
        }
        int first = 1;
        int second = 0;
        for (int i = 1 ; i < n ; i++){
            first = first+second;
            second = first-second;
        }
        return first;
    }
};