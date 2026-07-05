class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;

        if (n1>n2) return findMedianSortedArrays(nums2,nums1);

        int low = 0;
        int high = nums1.size();

        while(low<=high){
            int mid = low + (high-low)/2;

            int l1 = INT_MIN;
            int r1 = INT_MAX;
            int l2 = INT_MIN;
            int r2 = INT_MAX;
            if (mid > 0) l1 = nums1[mid-1];
            if (mid < nums1.size()) r1 = nums1[mid];
            if (((n+1)/2)-mid > 0) l2 = nums2[((n+1)/2)-mid-1];
            if (((n+1)/2)-mid < nums2.size()) r2 = nums2[((n+1)/2)-mid];

            if (l1<=r2 and l2<=r1) {
                if((n1+n2)%2 == 0){
                    return ((double)max(l1,l2)+(double)min(r1,r2))/2.0;
                }
                else{
                    return (double)max(l1,l2);
                }
            }
            else if (l1>r2) high = mid-1;
            else if (l2>r1) low = mid+1;

        }
        return 0;
    }
};