class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;
        int a = low;
        int b = mid+1;
        while(a<=mid and b<=high){
            if(nums[a]<=nums[b]){
                temp.push_back(nums[a]);
                a++;
            }
            else{
                temp.push_back(nums[b]);
                b++;
            }
        } 
        while(a<=mid){
            temp.push_back(nums[a]);
            a++;
        }
        while(b<=high){
            temp.push_back(nums[b]);
            b++;
        }
        for(int i = 0 ; i < temp.size() ; i++){
            nums[low+i] = temp[i];
        }
    }
    void ms(vector<int>& nums, int low, int high){
        if(low==high) return;
        int mid = low+(high-low)/2;
        ms(nums,low,mid);
        ms(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        ms(nums,0,nums.size()-1);
        return nums;
    }
};