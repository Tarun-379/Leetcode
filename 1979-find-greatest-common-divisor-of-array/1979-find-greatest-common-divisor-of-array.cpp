class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minu = *min_element(nums.begin(),nums.end());
        int maxu = *max_element(nums.begin(),nums.end());
        return gcd(minu,maxu);
    }
};