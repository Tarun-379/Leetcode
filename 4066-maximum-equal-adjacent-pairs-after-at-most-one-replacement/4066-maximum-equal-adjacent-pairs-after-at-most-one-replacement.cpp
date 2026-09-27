class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size();
        int base = 0;
        map<pair<int,int>,int> cnt;

        for(int i = 0 ; i+1 < n ; i ++ ){
            int a = nums[i] ,b = nums[i+1];
            if(a==b) base++;
            else{
                auto key = make_pair(min(a,b),max(a,b));
                cnt[key]++;
            }
        }

        int best = 0;
        for(auto&[k,v] : cnt) best= max(best,v);

        return base+best;
    }
};