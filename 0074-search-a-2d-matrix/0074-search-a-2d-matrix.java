class Solution {
    public boolean searchMatrix(int[][] mat, int target) {
           int n = mat.length;
           int m = mat[0].length;
           int start =0;
           int end = n *m -1;
           
           while(start <= end){
            int mid = end + (start - end)/2;
            int element = mat[mid/m][mid%m];
            if(element == target){
                return true;
            }
            else if(element > target){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
           }
             return false;
    }
}