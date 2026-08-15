class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       int n = nums.size();
       int count=0;
       for(int i =0;i<n;i++){
        if(nums[i]==0){
            count++;
        }
       }
       if(count==n){
        return 0;
       }
       int xorr=0;
       for(int i=0;i<n;i++){
        xorr = xorr ^ nums[i];
       }
       if(xorr==0){
        return n-1;
       }
       return n;
    }
};