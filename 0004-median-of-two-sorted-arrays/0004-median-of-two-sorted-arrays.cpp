class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int j=nums1.size()/2;

        if (nums1.size()%2==0){
            return (float(nums1[j]+nums1[j-1]))/2;
        }
        else
           return nums1[j];

    }
};