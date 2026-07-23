class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans={{1},{1,1}};
        if (n<3) return vector<vector<int>>(ans.begin(),ans.begin()+n); 

        
        for(int i = 2 ; i<=n ; i++){
            vector<int> temp(ans[i-1]);

            vector<int> temp2(temp.size()+1);
            temp2[0]=1;
            temp2[temp2.size()-1]=1;

            for(int j = 0 ; j < temp.size()-1 ; j ++){
                temp2[j+1] = temp[j]+temp[j+1];
            }

            
            ans.push_back(temp2);
            if (ans.size()==n) break;
        }


        return ans;
    }
};