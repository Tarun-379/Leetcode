class Solution {
public:
    string addBinary(string a, string b) {
        if(a == "0") return b;
        if(b == "0") return a;

        string ret;

        int ia = a.size()-1 , ib = b.size()-1;
        int carry = 0;

        while(ia>=0 or ib>=0 or carry){
            int sum = carry;
            if (ia >= 0)
                sum += a[ia--] - '0';
            if (ib >= 0)
                sum += b[ib--] - '0';

            ret.push_back((sum%2)+'0');
            carry = sum/2;

        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};