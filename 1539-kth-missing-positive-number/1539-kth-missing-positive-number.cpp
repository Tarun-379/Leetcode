class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k) return k;
        int count = 0;
        for(int i = 0 ; i < arr.size() ; i ++ ){
            if(arr[i]-i-1 >= k){
                return arr[i-1]+k-count;
            }
            count = arr[i]-i-1;
        }
        return(arr[arr.size()-1]+k-count);
    }
};