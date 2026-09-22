class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ret = 0;
        for(int i = 0 ; i < nums.size() ; i ++ ){
            int count = 0;
            int temp = i;
            while(temp){
                count+=temp&1;
                temp>>=1;
            }
            if(count==k) ret+=nums[i];
        }
        return ret;
    }
};