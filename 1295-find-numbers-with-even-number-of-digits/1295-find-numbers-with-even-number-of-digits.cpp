class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ret = 0 ;
        for(int num : nums){
            int temp = 0;
            while(num){
                num/=10;
                temp++;
            }
            if(temp%2==0) ret++;
        }
        return ret;
    }
};