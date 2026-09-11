class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ret = 0;
        long long pen = 0;
        while((pen * cost1) <= total){
            ret += ((total - (pen * cost1)) / cost2) + 1;
            pen++;
        }
        return ret;
    }
};