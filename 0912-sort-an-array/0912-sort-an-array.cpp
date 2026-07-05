class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> mp;
        for(int num: nums){
            mp[num]++;
        }
        nums.clear();
        for(auto num: mp){
            for(int i = 0 ; i < num.second ; i++){
                nums.push_back(num.first);
            }
        }
        return nums;
    }
};