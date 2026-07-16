class Solution {
public:
    //int solve(int i, vector<int>& nums, vector<int>& dp) {
    //     //by memoization
    //     if (i >= nums.size()) return 0;              
    //     if (dp[i] != -1) return dp[i];    
    //     int rob = nums[i] + solve(i + 2, nums, dp);
    //     int skip = solve(i + 1, nums, dp);
        
    //     return dp[i] = max(rob, skip);
    // }
    // int rob(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> dp(n, -1);
    //     return solve(0, nums, dp);
    int solve(int index,vector<int>&nums,vector<int>&dp){
        if(index==0){
            return nums[0];
        }
        if(index==1){
            return max(nums[0],nums[1]);
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        return dp[index]=max(nums[index]+solve(index-2,nums,dp),solve(index-1,nums,dp));
    }
    int rob(vector<int>&nums){
        int n = nums.size();
        vector<int>dp(n,-1);// isme dp ka size n ka hoga 
        return solve(n-1,nums,dp);
    }
};