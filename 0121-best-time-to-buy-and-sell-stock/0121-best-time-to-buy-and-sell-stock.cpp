class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        for ( int num : prices ) {
            if (num<min) min = num;
            if (num-min>profit) profit = num-min;
        }
        return profit;
    }
};