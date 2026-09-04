class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1 or s.length() <= numRows) return s;
        string ret;
        vector<vector<char>> matrix(numRows, vector<char>(s.size(), 0));
        int i = 0 , j = 0;
        bool back = false;
        for(char c : s){
            if (i==numRows or back){
                if(i==numRows) i--;
                i--;
                j++;
                matrix[i][j] = c;
                if(i == 0 ) back = false;
            }
            if (i!=numRows and !back){
                matrix[i][j] = c;
                i++;
                if(i==numRows) back = true;
            }
        }

        for (auto& row : matrix) {
            for (char element : row) {
                if (element != 0) ret = ret+element;
            }
        }
        return ret;
    }
};