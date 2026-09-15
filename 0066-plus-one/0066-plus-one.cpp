class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9) {
            digits[digits.size()-1]++;
            return digits;
        }

        int count = 0;
        for(int num: digits){
            if(num==9) count++;
        }

        if(count==digits.size()){
            vector<int> ret(digits.size()+1);
            ret[0]=1;
            return ret;
        }

        for(int i = digits.size()-1 ; i >= 0 ; i -- ){
            if(digits[i]==9) digits[i]=0;
            else {
                digits[i]++;
                break;
            }
        }
        return digits;
    }
};