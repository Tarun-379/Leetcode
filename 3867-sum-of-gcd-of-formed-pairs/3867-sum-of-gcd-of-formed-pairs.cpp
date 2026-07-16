class Solution {
public:
    int gcd(int a, int b){
        while(b){
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        long long ret = 0;
        vector<int> gcds;
        int maxer = nums[0];
        for(int i = 0 ; i < nums.size() ; i++ ){
            maxer = max(maxer,nums[i]);
            gcds.push_back(gcd(nums[i],maxer));
        }
        sort(gcds.begin(),gcds.end());
        for(int i = 0 ; i < gcds.size()/2 ; i++){
            ret+=gcd(gcds[i],gcds[gcds.size()-1-i]);
        }
        return ret;
    }
};