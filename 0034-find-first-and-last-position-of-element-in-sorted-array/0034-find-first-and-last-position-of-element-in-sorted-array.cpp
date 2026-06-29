class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        if(nums.empty()) return ans;

        int low = 0;
        int high = nums.size()-1;
        int count = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if (nums[mid] == target) count++;
            if (target > nums[mid]) low = mid+1;
            if (target <= nums[mid]) high = mid-1;
        }
        if (count!=0){
            ans[0] = low;
        }

        low = 0;
        high = nums.size()-1;
        count = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if (nums[mid] == target) count++;
            if (target >= nums[mid]) low = mid+1;
            if (target < nums[mid]) high = mid-1;
        }
        if (count!=0){
            ans[1] = high;
        }

        return ans;
    }
};