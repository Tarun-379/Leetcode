class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        for(int i = 0 ; i < nums.size() ; i ++ ){
            if(nums[i]<a) nums[i]=0;
            else if(nums[i]>=a and nums[i]<=b) nums[i]=1;
            else nums[i]=2;
        }
        long long MOD = 1e9+7;
        long long ret = 0;
        long long ones = 0;
        long long twos = 0;
        for(int num : nums){
            if(num==0){
                ret+=ones+twos;
            }
            else if(num==1){
                ret+=twos;
                ones++;
            }
            else {
                twos++;
            }
        }
        return (int) (ret % MOD);
    }
};