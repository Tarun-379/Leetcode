class Solution {
public:
    bool sod(vector<int>& nums, int threshold, int d){
        for(int num: nums){
            threshold -= (num + d - 1) / d;
            if(threshold<0) return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = 1;
        for(int num : nums){
            if (num > high) high = num;
        }
        while(low <= high){
            int mid = low+(high-low)/2;
            if (sod(nums,threshold,mid)) high = mid-1;
            else low = mid+1;
        }
        return low;

    }
};