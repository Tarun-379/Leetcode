class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int best = 0;
        for(int l = 0 ; l < n ; l ++ ){
            long long sum = 0;
            unordered_set<long long> res;
            for(int r = l ; r < n ; r ++ ){
                sum+=nums[r];
                int temp = ((sum%k)+k)%k;
                long long c = (((2LL * nums[r]) % k) + k) % k;
                res.insert(c);
                if(temp == 0 or res.count(temp)){
                    best = max(best,r-l+1);
                }
            }
        }
        return best;
    }
};