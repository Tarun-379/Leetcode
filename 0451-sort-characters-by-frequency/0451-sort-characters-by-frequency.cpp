class Solution {
public:
    string frequencySort(string s) {
        string result = "";
        vector<pair<int,int>> freq(75);
        for(int i = 48 ; i < 123 ; i++ ){
            freq[i-48].first = 0;
            freq[i-48].second = i;
        }
        for(char chr : s){
            freq[chr-48].first++;
        }
        sort(freq.begin(),freq.end());
        for(auto p : freq){
            while(p.first!=0){
                result += (char)p.second;
                p.first--;
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};