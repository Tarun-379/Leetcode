class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ret = 2;
        int cur = 2;
        for(int i = 2 ; i < nums.size() ; i ++ ){
            if(nums[i] == nums[i-1]+nums[i-2]) cur++;
            else cur = 2;
            ret = max(ret,cur);
        }
        return ret;
    }
};