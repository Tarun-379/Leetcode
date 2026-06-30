class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4) return ans;
        sort(nums.begin(),nums.end());
        for (int i = 0 ; i < nums.size() - 3 ; i++){
            if(i!=0){
                if(nums[i]==nums[i-1]) continue;
            }
            for ( int j = i+1 ; j < nums.size() - 2 ; j++){
                if(j!=i+1){
                    if(nums[j]==nums[j-1]) continue;
                }
                int k = j+1;
                int l = nums.size()-1;
                while(k<l){
                    if((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]==target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        do{
                            k++;
                        }while(nums[k]==nums[k-1] and k<l);
                        do{
                            l--;
                        }while(nums[l]==nums[l+1] and k<l);
                    }
                    else if((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]>target){
                        l--;
                    }
                    else if((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]<target){
                        k++;
                    }
                }
            }
        }
        return ans;
    }
};