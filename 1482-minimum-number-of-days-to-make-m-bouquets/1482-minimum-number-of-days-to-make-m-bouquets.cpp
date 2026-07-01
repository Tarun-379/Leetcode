class Solution {
public:
    bool checkDay(vector<int>& bloomDay, int m, int k, int day){
        int i = 0;
        for(int num : bloomDay){
            if (num<=day) i++;
            if (i >= k){
                m--;
                i = 0;
            }
            if (num>day) i=0;
        }
        if(m>0) return false;
        return true;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(long long)m*k){
            return -1;
        }

        int low = bloomDay[0];
        int high = bloomDay[0];

        for (int day : bloomDay) {
            low = min(low, day);
            high = max(high, day);
        }

        while(low<=high){
            int mid = low+(high-low)/2;
            if (checkDay(bloomDay,m,k,mid)) high = mid-1;
            else low = mid+1;
        }

        return low;
    }
};