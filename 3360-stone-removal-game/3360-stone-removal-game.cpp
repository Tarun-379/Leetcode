class Solution {
public:
    bool canAliceWin(int n) {
        int cut = 10;
        while(n>=cut){
            n-=cut;
            cut--;
        }    
        if(cut%2==0) return false;
        return true;
    }
};