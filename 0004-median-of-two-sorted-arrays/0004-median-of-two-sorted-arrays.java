class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;
        int size = n+m; int k =0;
        int arr[] = new int[size];
        for(int i =0;i<n;i++){
            arr[k++] = nums1[i];
        }
        for(int i =0;i<m;i++){
            arr[k++]=nums2[i];
        }
        Arrays.sort(arr);
        int total = arr.length;
        if(total%2!=0){
            return arr[total/2];
        }
        else 
        return ((double)(arr[total/2-1]) + (arr[total/2]))/2;
    }
}