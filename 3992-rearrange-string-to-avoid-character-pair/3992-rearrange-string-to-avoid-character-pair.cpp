class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string c = "", d = "", f = "";

        for(char &ch : s){
            if(ch == y){
                c += ch;
            }
            else if(ch == x){
                d += ch;
            }
            else{
                f += ch;
            }
        }

        return c + d + f;
    }
};