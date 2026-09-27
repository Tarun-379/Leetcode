class Solution {
public:
    bool existsAsPartner(unordered_map<int,int> &freq , int a, int other){
        auto it = freq.find(other);
        if(it == freq.end()) return false;
        if(other == a)return it->second >=2;
        return true;
    }

    
    bool causesViolation(unordered_map<int,int> &freq , int v){
        for(auto&[a,count] : freq) {
            int b= v-a;
            if(existsAsPartner(freq,a,b)) return true;
            int c= a+v;
            if(existsAsPartner(freq,a,c)) return true;
            
        }
        return false;
    }
 
    
    int maxSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        int left = 0 , best = 0;

        for(int right = 0 ; right < n ; right ++ ){
            int v = nums[right];

            while(causesViolation(freq,v)){
                int leftVal = nums[left];
                freq[leftVal]--;
                if(freq[leftVal] == 0) freq.erase(leftVal);
                left++;
            }
            freq[v]++;
            best = max(best,right-left+1);
            
        }
        return best;
    }
};