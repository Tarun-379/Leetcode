class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0 , ds = 0;
        for (auto num : nums){
            es+=num;
            while(num){
                ds+=num%10;
                num/=10;
            }
        }
        return es-ds;
    }
};