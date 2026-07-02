class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxx = arr[0];
        for (int num : arr){
            if (num>maxx) maxx = num;
        }
        int ind = 0;
        for(int i = 0 ; i < maxx ; i++){
            if (i==arr[ind]) {
                ind++;
                continue;
            }
            k--;
            if(k<0) return i;
        }
        return arr[ind]+k+1;
    }
};