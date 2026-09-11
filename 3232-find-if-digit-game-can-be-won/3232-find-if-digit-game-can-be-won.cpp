class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singly = 0 , doubly = 0;
        for(int num : nums){
            if(num<10) singly+=num;
            else doubly+=num;
        }
        if(singly-doubly!=0) return true;
        return false;
    }
};