class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ret = 0;
        for(int i = 0 ; i < nums.size() ; i ++ ){
            if(nums[i]>nums[ret]) ret = i;
        }
        for(int i = 0 ; i < nums.size() ; i ++ ){
            if(i!=ret and nums[i]>nums[ret]/2) return -1;
        }
        return ret;
    }
};