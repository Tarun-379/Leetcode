class Solution {
public:
    bool canCarry(vector<int>& weights, int days ,int w){
        int c = 0;
        for (int i = 0 ; i < weights.size() ; i++){
            c+=weights[i];
            if(c>w){
                days--;
                c=weights[i];
            }
            if(i == weights.size()-1 and c!=0) days--;
        }
        if (days>=0) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = weights[0];
        int high = 0;
        for(int num : weights){
            if (num > low) low = num;
            high+=num;
        }

        while(low <= high){
            int mid = low+(high-low)/2;
            if (canCarry(weights,days,mid)) high = mid-1;
            else low = mid+1;
        }

        return low;
    }
};