class Solution {
    public static int solve(int [][]grid, int i , int j, int m , int n, int [][]dp){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if(i==m-1){
            return dp[i][j]=grid[i][j]+solve(grid,i,j+1,m,n,dp);
        }
        if(j==n-1){
            return dp[i][j]=grid[i][j]+solve(grid,i+1,j,m,n,dp);
        }
        else{
            return dp[i][j]=grid[i][j]+ Math.min(solve(grid,i,j+1,m,n,dp),solve(grid,i+1,j,m,n,dp));
        }
    }
    public int minPathSum(int[][] grid) {
       int m = grid.length;
       int n = grid[0].length;
       int i=0;
       int j=0;
       int [][]dp=new int[m][n];
        for (int[] row : dp) {
            Arrays.fill(row, -1);
        }
       return solve(grid,i,j,m,n,dp); 
    }
}