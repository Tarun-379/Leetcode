class Solution {
public:
    bool cEat(vector<int>& piles, int h, int speed){
        long long hours = 0;
        for (int num : piles){
            hours+=ceil((double)num/(double)speed);
        }
        if (hours <= h) return true;
        return false;
    }


    int minEatingSpeed(vector<int>& piles, int h) {

        int max = piles[0];
        for( int num : piles){
            if (num > max) max = num;
        }

        int low = 1;
        int high = max;
        while(low <= high){
            int mid = low + (high-low)/2;
            if (cEat(piles,h,mid)) high = mid-1;
            else low = mid+1;
        }

        return low;
    }
};