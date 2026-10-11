class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret;
        int temp = 0;
        for(auto num : nums){
            temp+=num;
            ret.push_back(temp);
        }
        return ret;
    }
};