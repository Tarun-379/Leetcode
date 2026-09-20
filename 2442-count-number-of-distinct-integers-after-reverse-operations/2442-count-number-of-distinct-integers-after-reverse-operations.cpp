class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for(auto num : nums){
            st.insert(num);

            int temp = 0;
            while(num){
                temp*=10;
                temp+=num%10;
                num/=10;
            }

            st.insert(temp);
        }
        return st.size();
    }
};