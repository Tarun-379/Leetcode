class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        const long long p = 379;
        const long long MOD = 1e9 + 7;

        int n = nums.size();

        int left = 1;
        int right = nums.size();

        while(left<=right){
            int mid = left+(right-left)/2;
            int subl = 0 , subr = mid-1;

            unordered_map<long long,int> mp;

            long long hash = 0;
            for(int i = subl; i <=subr ; i++) {
                hash = (hash * p + nums[i]) % MOD;
            }
            mp[hash]++;

            long long power = 1;
            for(int i = 0; i < mid-1; i++){
                power = (power * p) % MOD;
            }
            for(int i = mid; i < n; i++){
                hash = (hash - nums[i-mid] * power % MOD + MOD) % MOD;
                hash = (hash * p + nums[i]) % MOD;
                mp[hash]++;
            }

            bool found = false;

            for(auto x : mp){
                if(x.second == 1){
                    found = true;
                    break;
                }
            }

            if(found) right = mid-1;
            else left = mid+1;
        }

        return left;
    }
};