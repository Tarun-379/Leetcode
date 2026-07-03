class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-2 ; i++){
            if (i!=0){
                if (nums[i] == nums[i-1]) continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    do{
                        j++;
                    }while(nums[j]==nums[j-1] and j < k);
                    do{
                        k--;
                    }while(nums[k]==nums[k+1] and j < k);
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
            }
        } 
        return ans;
    }
};