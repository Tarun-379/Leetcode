class Solution {
public:
    int maxArea(vector<int>& height) {
        int ret = 0;
        int left = 0;
        int right = height.size()-1;
        while(left!=right){
            int temp = (right-left) * (min(height[left],height[right]));
            if (temp > ret) ret = temp;
            if(height[left]<height[right]) left++;
            else right--;
        }
        return ret;
    }
};