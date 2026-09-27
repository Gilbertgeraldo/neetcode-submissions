class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i = 0;i < nums1.size();++i){
            merge.push_back(nums1[i]);
        }
        for(int j = 0;j < nums2.size();j++){
            merge.push_back(nums2[j]);
        }
        sort(merge.begin(),merge.end());

        int n = merge.size(); 
        if(n%2 != 0){
            return merge[n/2];
        }else{
            return (merge[(n / 2) - 1] + merge[n / 2]) / 2.0;
        }
    }
};
