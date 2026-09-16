class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" or num2=="0") return "0";

        int n = num1.size();
        int m = num2.size();
        vector<int> ret (n+m,0);
        
        for(int i = n-1 ; i >=0 ; i -- ){
            for(int j = m-1 ; j >= 0 ; j -- ){
                int a = num1[i]-'0';
                int b = num2[j]-'0';

                int product = a * b;

                int pos = i+j+1;

                ret[pos] += product;
                ret[pos-1] += ret[pos]/10;
                ret[pos] %= 10;
            }
        }
        string rets;
        for(auto num:ret){
            if (rets.empty() && num == 0)
                continue;
            rets+=num+'0';
        }
        return rets;
    }
};