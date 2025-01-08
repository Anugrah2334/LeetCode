class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() and j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            return nums1[i];
            if(nums1[i]>nums2[j])
            j=j+1;
            else if(nums1[i]<nums2[j])
            i=i+1;
        }
        if(nums1[0]>nums2[0])
        return nums2[0]*10+nums1[0];
        else
        return nums1[0]*10+nums2[0];        
    }
};
