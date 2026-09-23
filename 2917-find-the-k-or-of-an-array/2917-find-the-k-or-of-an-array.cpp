class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ret = 0;
        for(int i = 0 ; i < 32 ; i ++ ){
            int count = 0;
            for(int j = 0 ; j < nums.size() ; j ++ ){
                count+=nums[j]&1;
                nums[j]>>=1;
            }
            if (count>=k) {
                ret |= (1<<i);
            }
        }
        return ret;
    }
};