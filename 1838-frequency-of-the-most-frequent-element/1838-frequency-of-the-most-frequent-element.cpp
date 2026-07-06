class Solution {
public:
    bool freq(vector<int>& nums, int k, int mid){
        vector<long long> cumu;
        long long gum = 0;
        for(int i = 0 ; i < nums.size() ; i ++ ){
            gum+=nums[i];
            cumu.push_back(gum);
        }
        int left = nums.size()-mid;
        int right = nums.size()-1;
        while(left>=0){
            long long sum = cumu[right];
            if (left > 0) sum -= cumu[left - 1];
            sum = (long long)nums[right] * mid - sum;
            if (sum <= k) return true;
            left--;
            right--;
        }
        return false;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int low = 1;
        int high = nums.size();
        sort(nums.begin(),nums.end());
        while(low <= high){
            int mid = low + (high-low)/2;
            if (!freq(nums,k,mid)) high = mid-1;
            else low = mid+1;
        }
        return high;
    }
};