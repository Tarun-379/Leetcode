class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1 or s.length() <= numRows) return s;

        string ret;

        vector<string> rows(numRows);
        int i = 0 ; 
        bool back = false;

        for(char c : s){
            rows[i]+=c;
            if(i == numRows-1) back = true;
            else if (i==0) back=false;
            if(back) i--;
            else i++;
        }

        for(string row : rows) ret+=row;
        
        return ret;
    }
};