class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double median=0;
        int[] merged= new int[nums1.length+ nums2.length];
        for(int i=0;i<nums1.length;i++){
            merged[i]= nums1[i];
        }
        for(int j=0;j<nums2.length;j++){
            merged[j+nums1.length]= nums2[j];
        }
        Arrays.sort(merged);
        int length = merged.length;
        if(length%2==0){
            return (merged[length/2-1]+ merged[length/2])/2.0;
        }
        else{
            return merged[length/2];
        }
        
    }}
