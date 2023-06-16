class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1 , j = n - 1 , k = m+n -1 ; // we will start by comparing last index of both the arrays 
        while(i>=0 && j >= 0 ){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--]; // if nums1 last element greater than we change to nums1[k] ;
            }
            else nums1[k--]=nums2[j--];

        }
	//appending leftout element ; 
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
    }
        
    
};