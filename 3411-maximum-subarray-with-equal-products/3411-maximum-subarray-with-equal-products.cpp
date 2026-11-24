class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ret = 0;

        for(int i = 0 ; i < n ; i ++ ){
            bool valid = true;

            for(int j = i ; j < n ; j ++ ){
                if(j-i >= 2){
                    for(int k = i; k < j; k++) {
                        if(j - i == 2 && gcd(nums[i], nums[i+1]) != 1) {
                            valid = false;
                        }

                        if(gcd(nums[k], nums[j]) != 1) {
                            valid = false;
                            break;
                        }
                    }
                }
                if(!valid) break;
                ret = max(ret,j-i+1);
            }
        }
        return ret;
    }
};