class Solution {
public:
    bool isPos(vector<int>& nums, int k, int m){
        int temp = 0;
        for(int num : nums){
            if(temp+num<=m){
                temp+=num;
            }
            else{
                temp = num;
                k--;
            }
            if(k<=0) return false;
        }
        return true;
        
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isPos(nums,k,mid)) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};