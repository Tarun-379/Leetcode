class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ret = 0;
        for(auto nums : accounts){
            int sum = 0;
            for(auto num : nums) sum+=num;
            ret = max(sum,ret);
        }
        return ret;
    }
};