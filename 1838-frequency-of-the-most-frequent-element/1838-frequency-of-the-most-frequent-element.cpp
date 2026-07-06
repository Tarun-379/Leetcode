class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if (nums.size()<2) return nums.size();
        if (nums.size()==2) {
            if(nums[1]-nums[0]>k) return 1;
            return 2;
        }
        int qax = 1;
        int left = nums.size()-2;
        int right = nums.size()-1;
        long long sum = nums[right]-nums[left];
        while (left > 0 and left <= right){
            int size = right-left+1;
            if(sum <= k){
                left--;
                sum+=nums[right]-nums[left];
                qax = max(qax,size);
            }
            else{
                sum-=(nums[right]-nums[right-1])*(size-1);
                right--;
            }
        }
        if (sum <= k) qax = max(qax, right - left + 1);
        return qax;
    }
};