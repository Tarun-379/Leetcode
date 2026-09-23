class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0 ; i < 32 ; i ++ ){
            int count = 0;
            for(int j = 0 ; j < nums.size() ; j ++ ){
                count+=nums[j]&1;
                nums[j]>>=1;
            }
            if (count>=k) ans.push_back(1);
            else ans.push_back(0);
        }

        int ret = 0;
        int p = 0;
        for(auto num : ans){
            ret+=num*(pow(2,p));
            p++;
        }
        return ret;
    }
};