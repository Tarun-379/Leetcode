class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        vector<int> counter(high-low+1,0);
        for(int num:nums){
            counter[num-low]++;
        }
        nums.clear();
        for(int i = 0 ; i < high-low+1 ; i++){
            while(counter[i]!=0){
                nums.push_back(i+low);
                counter[i]--;
            }
        }
        return nums;
    }
};