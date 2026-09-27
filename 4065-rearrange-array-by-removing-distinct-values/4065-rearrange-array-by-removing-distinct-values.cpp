class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp ;
        for(auto num : nums) mp[num]++;
        int maxF = 0;
        for(auto&[k,f] : mp) maxF = max(maxF,f);
        
        vector<int> ret;
        ret.reserve(nums.size());
        for(int r = 1 ; r<= maxF ; r++){
            for(auto &[k,f] : mp) if(f>=r) ret.push_back(k);
        }
        return ret;
    }
};