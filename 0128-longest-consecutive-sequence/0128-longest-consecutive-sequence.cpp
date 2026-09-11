class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        unordered_set<int> st(nums.begin(),nums.end());
        int max = 1 ;
        for (auto x : st){
            if (!st.count(x-1)){
                int anchor = x;
                int cur = 1;
                while(st.count(anchor+1)){
                    anchor ++;
                    cur ++;
                }
                if (cur > max) max = cur;
            }
        }
        return max;
    }
};